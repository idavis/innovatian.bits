#region Using Directives

using System;
using Eeyore.Commons.ObjectModel;

#endregion

namespace Eeyore.Bits.Net
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