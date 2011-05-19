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
using Innovatian.Bits.Interop;
using Innovatian.Bits.ObjectModel;

#endregion

namespace Innovatian.Bits.Adapters
{
    internal class BitsCallbackAdapter : IBackgroundCopyCallback, IBitsListener
    {
        #region IBackgroundCopyCallback Members

        void IBackgroundCopyCallback.JobError( IBackgroundCopyJob pJob, IBackgroundCopyError pError )
        {
            EventHandler<JobErrorEventArgs> handler = JobError;
            if ( handler != null )
            {
                handler( this,
                         new JobErrorEventArgs( new BitsJob( new BitsJobAdapter( pJob ) ),
                                                new BitsError( new BitsErrorAdapter( pError ) ) ) );
            }
        }

        void IBackgroundCopyCallback.JobModification( IBackgroundCopyJob pJob, uint dwReserved )
        {
            EventHandler<EventArgs<BitsJob>> handler = JobModification;
            if ( handler != null )
            {
                handler( this, new EventArgs<BitsJob>( new BitsJob( new BitsJobAdapter( pJob ) ) ) );
            }
        }

        void IBackgroundCopyCallback.JobTransferred( IBackgroundCopyJob pJob )
        {
            EventHandler<EventArgs<BitsJob>> handler = JobTransferred;
            if ( handler != null )
            {
                handler( this, new EventArgs<BitsJob>( new BitsJob( new BitsJobAdapter( pJob ) ) ) );
            }
        }

        #endregion

        #region IBitsListener Members

        public event EventHandler<JobErrorEventArgs> JobError;

        public event EventHandler<EventArgs<BitsJob>> JobModification;

        public event EventHandler<EventArgs<BitsJob>> JobTransferred;

        #endregion
    }
}