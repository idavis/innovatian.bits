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
using Eeyore.Bits.ObjectModel;

#endregion

namespace Eeyore.Bits
{
    /// <summary>
    /// IBitsListener is usded for event propagation from the BITS system to the BitsJob.
    /// </summary>
    public interface IBitsListener
    {
        /// <summary>
        /// Occurs when there is a error during the specified job.
        /// </summary>
        event EventHandler<JobErrorEventArgs> JobError;

        /// <summary>
        /// Occurs when the specified job is changed.
        /// </summary>
        event EventHandler<EventArgs<BitsJob>> JobModification;

        /// <summary>
        /// Occurs when job has completed its file transfer operations.
        /// </summary>
        event EventHandler<EventArgs<BitsJob>> JobTransferred;
    }
}