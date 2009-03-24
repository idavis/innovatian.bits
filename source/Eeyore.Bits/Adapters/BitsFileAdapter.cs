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

using System.Runtime.InteropServices;
using Eeyore.Bits.Interop;
using Eeyore.Bits.ObjectModel;

#endregion

namespace Eeyore.Bits.Adapters
{
    internal class BitsFileAdapter : Disposable
    {
        /// <summary>
        /// 
        /// </summary>
        /// <param name="jobFile">
        /// The IBackgroundCopyFile interface contains information about a file
        /// that is part of a job.
        /// </param>
        internal BitsFileAdapter( IBackgroundCopyFile jobFile )
        {
            File = jobFile;
        }

        private IBackgroundCopyFile File { get; set; }

        /// <summary>
        /// Retrieves the local name of the file.
        /// </summary>
        public string LocalName
        {
            get
            {
                try
                {
                    string localName;
                    File.GetLocalName( out localName );
                    return localName;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Retrieves information on the progress of the file transfer.
        /// </summary>
        public FileProgressAdapter Progress
        {
            get
            {
                try
                {
                    _BG_FILE_PROGRESS fileProgress;
                    File.GetProgress( out fileProgress );
                    return new FileProgressAdapter( fileProgress );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Retrieves the remote name of the file.
        /// </summary>
        public string RemoteName
        {
            get
            {
                try
                {
                    string remoteName;
                    File.GetRemoteName( out remoteName );
                    return remoteName;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Releases unmanaged and - optionally - managed resources.
        /// </summary>
        /// <param name="disposing"><c>true</c> to release both managed and unmanaged resources; <c>false</c> to release only unmanaged resources.</param>
        /// <remarks>
        /// A call to base.Dispose( disposing ); must be made by all inheriting
        /// classes.
        /// </remarks>
        protected override void Dispose( bool disposing )
        {
            if ( !IsDisposed )
            {
                if ( File != null )
                {
                    Marshal.ReleaseComObject( File );
                    File = null;
                }
            }
            base.Dispose( disposing );
        }
    }
}