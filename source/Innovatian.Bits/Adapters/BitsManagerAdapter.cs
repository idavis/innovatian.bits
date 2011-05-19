#region License

//
// Copyright © 2009 Ian Davis <ian.f.davis@gmail.com>
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#endregion

#region Using Directives

using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading;
using Innovatian.Bits.Interop;
using Innovatian.Bits.ObjectModel;

#endregion

namespace Innovatian.Bits.Adapters
{
    internal class BitsManagerAdapter : Disposable
    {
        private const int DEFAULT_RETRY_DELAY = 600;
        private const int DEFAULT_RETRY_PERIOD = 0x127500;

        private static readonly BitsManagerAdapter _instance = new BitsManagerAdapter();
        private static IBackgroundCopyManager _bitsManager = new BackgroundCopyManagerClass();

        private BitsManagerAdapter()
        {
        }

        public static BitsJob CreateBitsJob( string jobName )
        {
            return CreateBitsJob( jobName, BG_JOB_TYPE.BG_JOB_TYPE_DOWNLOAD );
        }

        public static BitsJob CreateBitsJob( string jobName, BG_JOB_TYPE jobType )
        {
            return CreateBitsJob( jobName, jobType, string.Empty );
        }

        public static BitsJob CreateBitsJob( string jobName, string description )
        {
            return CreateBitsJob( jobName, BG_JOB_TYPE.BG_JOB_TYPE_DOWNLOAD, description );
        }

        public static BitsJob CreateBitsJob( string jobName, BG_JOB_TYPE jobType, string description )
        {
            return CreateBitsJob( jobName, jobType, description, DEFAULT_RETRY_PERIOD, DEFAULT_RETRY_DELAY );
        }

        public static BitsJob CreateBitsJob( string jobName, BG_JOB_TYPE jobType, long retryPeriod, long retryDelay )
        {
            return CreateBitsJob( jobName, jobType, string.Empty, retryPeriod, retryDelay );
        }

        public static BitsJob CreateBitsJob( string jobName, BG_JOB_TYPE jobType, string description, long retryPeriod,
                                             long retryDelay )
        {
            BitsJobAdapter bitsJobAdapter = CreateBitsJobAdapter( jobName, jobType, description, retryPeriod,
                                                                  retryDelay );

            var bitsJob = new BitsJob( bitsJobAdapter );
            return bitsJob;
        }

        public static BitsJobAdapter CreateBitsJobAdapter( string displayName, BG_JOB_TYPE jobType, string description,
                                                           long retryPeriod,
                                                           long retryDelay )
        {
            try
            {
                IBackgroundCopyJob ppJob;
                Guid pJobID;

                _bitsManager.CreateJob( displayName, jobType, out pJobID, out ppJob );
                var bitsJobAdapter = new BitsJobAdapter( ppJob ) {Description = description};

                if ( retryPeriod != DEFAULT_RETRY_PERIOD )
                {
                    bitsJobAdapter.NoProgressTimeout = retryPeriod;
                }

                if ( retryDelay != DEFAULT_RETRY_DELAY )
                {
                    bitsJobAdapter.MinimumRetryDelay = retryDelay;
                }
                return bitsJobAdapter;
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
        }

        protected override void Dispose( bool disposing )
        {
            if ( !IsDisposed )
            {
                if ( _bitsManager != null )
                {
                    Marshal.ReleaseComObject( _bitsManager );
                    _bitsManager = null;
                }
            }
            base.Dispose( disposing );
        }

        public new static void Dispose()
        {
            ( (Disposable) _instance ).Dispose();
        }

        public static BitsJob GetJob( Guid jobId )
        {
            try
            {
                IBackgroundCopyJob bitsJob;
                _bitsManager.GetJob( ref jobId, out bitsJob );
                var job = new BitsJob( new BitsJobAdapter( bitsJob ) );
                return job;
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
        }

        public static IEnumerable<BitsJob> GetCurrentUserJobs()
        {
            return GetJobs( BG_JOB_ENUM_USER_TYPE.BG_JOB_ENUM_CURRENT_USER );
        }

        public static IEnumerable<BitsJob> GetAllUserJobs()
        {
            return GetJobs( BG_JOB_ENUM_USER_TYPE.BG_JOB_ENUM_ALL_USERS );
        }

        private static IEnumerable<BitsJob> GetJobs( BG_JOB_ENUM_USER_TYPE whichJobs )
        {
            IEnumBackgroundCopyJobs ppEnumJobs;
            uint pceltFetched = 0;
            _bitsManager.EnumJobs( whichJobs, out ppEnumJobs );
            do
            {
                IBackgroundCopyJob job;
                ppEnumJobs.Next( 1, out job, ref pceltFetched );
                if ( pceltFetched == 1 )
                {
                    yield return new BitsJob( new BitsJobAdapter( job ) );
                }
            } while ( pceltFetched == 1 );
            Marshal.ReleaseComObject( ppEnumJobs );
        }

        public static string GetErrorDescription( int hResult )
        {
            try
            {
                string ppErrorDescription;
                _bitsManager.GetErrorDescription( hResult, Thread.CurrentThread.CurrentUICulture.LanguageId(),
                                                  out ppErrorDescription );
                return ppErrorDescription;
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
        }
    }
}