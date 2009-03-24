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
using System.Diagnostics.CodeAnalysis;

#endregion

namespace Eeyore.Bits.Enumerations
{
    /// <summary>
    /// NotifyFlags specifies the events that you want to receive.
    /// </summary>
    [SuppressMessage( "Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId = "Flags" )]
    [Flags]
    public enum NotifyFlags
    {
        /// <summary>
        /// All of the files in the job have been transferred.
        /// </summary>
        JobTransferred = 1,

        /// <summary>
        /// An error has occurred.
        /// </summary>
        JobError = 2,

        /// <summary>
        /// Event notification is disabled. BITS ignores the other flags.
        /// </summary>
        Disable = 4,

        /// <summary>
        /// The job has been modified. For example, a property value changed,
        /// the state of the job changed, or progress is made transferring the
        /// files. This flag is ignored if command line notification is
        /// specified.
        /// </summary>
        JobModification = 8,

        /// <summary>
        /// A file in the job has been transferred. This flag is ignored if
        /// command line notification is specified.
        /// </summary>
        FileTransferred = 16
    }
}