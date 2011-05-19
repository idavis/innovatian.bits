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
using System.Globalization;

#endregion

namespace Innovatian.Bits
{
    /// <summary>
    /// The BitsFileInfo structure provides the local and remote names of the
    /// file to transfer and validation logic on those values.
    /// </summary>
    public class BitsFileInfo
    {
        private const int MAX_PATH = 260;
        private const int REMOTE_FILE_NAME_MAX_LENGTH = 2200;

        /// <summary>
        /// The BitsFileInfo structure provides the local and remote names of the
        /// file to transfer.
        /// </summary>
        /// <param name="localFileName">
        /// String that contains the name of the file on the client. The file
        /// name must include the full path (for example,
        /// d:\myapp\updates\file.ext). You cannot use wildcards in the path or
        /// file name, and directories in the path must exist. The path is
        /// limited to MAX_PATH length. The user must have permission to write
        /// to the local directory for downloads and the reply portion of an
        /// upload-reply job. BITS does not support NTFS streams. Instead of
        /// using network drives, which are session specific, use UNC paths (for
        /// example, \\server\share\path\file). Do not include the \\? prefix in
        /// the path.
        /// </param>
        /// <param name="remoteFileName">
        /// String that contains the name of the file on the server (for
        /// example, http://[server]/[path]/file.ext). The format of the name
        /// must conform to the transfer protocol you use. You cannot use
        /// wildcards in the path or file name. The URL must contain only legal
        /// URL characters; no escape processing is performed. The URL is
        /// limited to REMOTE_FILE_NAME_MAX_LENGTH characters, not including the
        /// null terminator. Each segment of the URL is limited to MAX_PATH
        /// characters. You can use SMB to express the remote name of the file
        /// to download or upload; there is no SMB support for upload-reply
        /// jobs. You can specify the remote name as a UNC path, full path with
        /// a network drive, or use the "file://" prefix.
        /// <remarks>
        /// BITS 1.5 and earlier:  The SMB protocol for RemoteName is not supported.
        /// </remarks>
        /// </param>
        public BitsFileInfo( string localFileName, string remoteFileName )
        {
            localFileName = localFileName.Sanitize();
            remoteFileName = remoteFileName.Sanitize();

            if ( string.IsNullOrEmpty( localFileName ) )
            {
                throw new ArgumentNullException( "localFileName" );
            }

            if ( remoteFileName.Length > MAX_PATH )
            {
                throw new ArgumentOutOfRangeException( "localFileName",
                                                       localFileName,
                                                       string.Format(
                                                           CultureInfo.CurrentCulture,
                                                           "LocalFileName length must be less than or equal to {0}.",
                                                           MAX_PATH ) );
            }

            if ( string.IsNullOrEmpty( remoteFileName ) )
            {
                throw new ArgumentNullException( "remoteFileName" );
            }

            if ( remoteFileName.Length > REMOTE_FILE_NAME_MAX_LENGTH )
            {
                throw new ArgumentOutOfRangeException( "remoteFileName",
                                                       remoteFileName,
                                                       string.Format(
                                                           CultureInfo.CurrentCulture,
                                                           "RemoteFileName length must be less than or equal to {0}.",
                                                           REMOTE_FILE_NAME_MAX_LENGTH ) );
            }

            LocalFileName = localFileName;
            RemoteFileName = remoteFileName;
        }

        /// <summary>
        /// Gets the name of the local file.
        /// </summary>
        /// <value>The name of the local file.</value>
        public string LocalFileName { get; private set; }

        /// <summary>
        /// Gets the name of the remote file.
        /// </summary>
        /// <value>The name of the remote file.</value>
        public string RemoteFileName { get; private set; }
    }
}