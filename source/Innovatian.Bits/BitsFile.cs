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

using Innovatian.Bits.Adapters;
using Innovatian.Bits.ObjectModel;

#endregion

namespace Innovatian.Bits
{
    /// <summary>
    /// Provides a wrapper around IBackgroundCopyFile allowing the user to query
    /// information about a job file.
    /// </summary>
    public class BitsFile : Disposable
    {
        private BitsFileAdapter _bitsFileAdapter;

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsFile"/> class.
        /// </summary>
        /// <param name="bitsFileAdapter">The bits file adapter.</param>
        internal BitsFile( BitsFileAdapter bitsFileAdapter )
        {
            _bitsFileAdapter = bitsFileAdapter;
        }

        /// <summary>
        /// Gets the name of the local file.
        /// </summary>
        /// <value>The name of the local file.</value>
        public string LocalFileName
        {
            get { return _bitsFileAdapter.LocalName; }
        }

        /// <summary>
        /// Gets the name of the remote file.
        /// </summary>
        /// <value>The name of the remote file.</value>
        public string RemoteFileName
        {
            get { return _bitsFileAdapter.RemoteName; }
        }

        /// <summary>
        /// Gets the number of bytes total.
        /// </summary>
        /// <value>The number of bytes total.</value>
        public decimal BytesTotal
        {
            get { return _bitsFileAdapter.Progress.BytesTotal; }
        }

        /// <summary>
        /// Gets the number of bytes transferred.
        /// </summary>
        /// <value>The number of bytes transferred.</value>
        public decimal BytesTransferred
        {
            get { return _bitsFileAdapter.Progress.BytesTransferred; }
        }

        /// <summary>
        /// Gets a value indicating whether this <see cref="BitsFile"/> is completed.
        /// </summary>
        /// <remarks>
        /// This is true only after the job is completed.
        /// </remarks>
        /// <value><c>true</c> if completed; otherwise, <c>false</c>.</value>
        public bool Completed
        {
            get { return _bitsFileAdapter.Progress.Completed; }
        }

        /// <summary>
        /// Releases unmanaged and - optionally - managed resources.
        /// </summary>
        /// <param name="disposing"><c>true</c> to release both managed and unmanaged resources; <c>false</c> to release only unmanaged resources.</param>
        /// <remarks>
        /// A call to base.Dispose( disposing ); must be made by all inheriting classes.
        /// </remarks>
        protected override void Dispose( bool disposing )
        {
            if ( disposing && !IsDisposed )
            {
                if ( _bitsFileAdapter != null )
                {
                    _bitsFileAdapter.Dispose();
                    _bitsFileAdapter = null;
                }
            }
            base.Dispose( disposing );
        }
    }
}