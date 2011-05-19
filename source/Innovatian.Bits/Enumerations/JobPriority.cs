#region License

//
// Copyright © 2009-2011 Ian Davis <ian@innovatian.com>
// 
// Dual-licensed under the Apache License, Version 2.0, and the Microsoft Public License (Ms-PL).
// See the file LICENSE.txt for details.
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