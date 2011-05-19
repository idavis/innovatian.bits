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
using System.Diagnostics.CodeAnalysis;

#endregion

namespace Innovatian.Bits.Enumerations
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