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

namespace Eeyore.Bits.Enumerations
{
    /// <summary>
    /// The JobType enumeration defines constant values that specify the type of transfer job, such as download.
    /// </summary>
    public enum JobType
    {
        /// <summary>
        /// Specifies that the job downloads files to the client.
        /// </summary>
        Download = 0,

        /// <summary>
        /// Specifies that the job uploads a file to the server.
        /// </summary>
        Upload = 1,

        /// <summary>
        /// Specifies that the job uploads a file to the server and receives a reply file from the server application.
        /// </summary>
        UploadReply = 2
    }
}