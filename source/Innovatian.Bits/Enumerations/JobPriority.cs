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
    /// The JobPriority enumeration defines the constant values that specify
    /// the priority level of a job.
    /// </summary>
    public enum JobPriority
    {
        /// <summary>
        /// Transfers the job in the foreground. Foreground transfers compete
        /// for network bandwidth with other applications, which can impede the
        /// user's network experience. This is the highest priority level.
        /// </summary>
        Foreground = 0,

        /// <summary>
        /// Transfers the job in the background with a high priority. Background
        /// transfers use idle network bandwidth of the client to transfer
        /// files. This is the highest background priority level.
        /// </summary>
        High = 1,

        /// <summary>
        /// Transfers the job in the background with a normal priority.
        /// Background transfers use idle network bandwidth of the client to
        /// transfer files. This is the default priority level.
        /// </summary>
        Normal = 2,

        /// <summary>
        /// Transfers the job in the background with a low priority. Background
        /// transfers use idle network bandwidth of the client to transfer
        /// files. This is the lowest background priority level.
        /// </summary>
        Low = 3
    }
}