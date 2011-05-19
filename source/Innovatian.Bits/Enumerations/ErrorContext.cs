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

namespace Innovatian.Bits.Enumerations
{
    /// <summary>
    /// The ErrorContext enumeration defines the constant values that specify
    /// the context in which the error occurred.
    /// </summary>
    public enum ErrorContext
    {
        /// <summary>
        /// An error has not occurred.
        /// </summary>
        None = 0,

        /// <summary>
        /// The error context is unknown.
        /// </summary>
        Unknown = 1,

        /// <summary>
        /// The transfer queue manager generated the error.
        /// </summary>
        GeneralQueueManager = 2,

        /// <summary>
        /// The error was generated while the queue manager was notifying the
        /// client of an event.
        /// </summary>
        QueueManagerNotification = 3,

        /// <summary>
        /// The error was related to the specified local file. For example,
        /// permission was denied or the volume was unavailable.
        /// </summary>
        LocalFile = 4,

        /// <summary>
        /// The error was related to the specified remote file. For example, the
        /// URL was not accessible.
        /// </summary>
        RemoteFile = 5,

        /// <summary>
        /// The transport layer generated the error. These errors are general
        /// transport failures (these errors are not specific to the remote
        /// file).
        /// </summary>
        GeneralTransport = 6,

        /// <summary>
        /// The server application that BITS passed the upload file to generated
        /// an error while processing the upload file.
        /// </summary>
        RemoteApplication = 7
    }
}