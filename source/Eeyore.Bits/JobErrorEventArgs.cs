#region Using Directives

using System;

#endregion

namespace Eeyore.Bits.Net
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