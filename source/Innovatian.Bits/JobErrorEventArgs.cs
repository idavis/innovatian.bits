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