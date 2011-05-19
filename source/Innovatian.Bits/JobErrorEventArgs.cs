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

#endregion

namespace Innovatian.Bits
{
    /// <summary>
    /// 
    /// </summary>
    public class JobErrorEventArgs : EventArgs
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="JobErrorEventArgs"/> class.
        /// </summary>
        /// <param name="eventBitsJob">The event bits job.</param>
        /// <param name="errorInfo">The error info.</param>
        protected internal JobErrorEventArgs( BitsJob eventBitsJob, BitsError errorInfo )
        {
            BitsJob = eventBitsJob;
            BitsError = errorInfo;
        }

        /// <summary>
        /// Gets or sets the bits job.
        /// </summary>
        /// <value>The bits job.</value>
        public BitsJob BitsJob { get; private set; }


        /// <summary>
        /// Gets or sets the bits error.
        /// </summary>
        /// <value>The bits error.</value>
        public BitsError BitsError { get; private set; }
    }
}