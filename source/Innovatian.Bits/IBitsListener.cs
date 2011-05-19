#region License

//
// Copyright © 2009-2011 Ian Davis <ian@innovatian.com>
// 
// Dual-licensed under the Apache License, Version 2.0, and the Microsoft Public License (Ms-PL).
// See the file LICENSE.txt for details.
//

#endregion

#region Using Directives

using System;
using Innovatian.Bits.ObjectModel;

#endregion

namespace Innovatian.Bits
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