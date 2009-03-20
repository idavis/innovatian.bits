#region Using Directives

using System.Diagnostics.CodeAnalysis;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// The BG_JOB_PRIORITY enumeration defines the constant values that specify
    /// the priority level of a job.
    /// </summary>
    [SuppressMessage( "Microsoft.Naming", "CA1712:DoNotPrefixEnumValuesWithTypeName" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PRIORITY" )]
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    internal enum BG_JOB_PRIORITY
    {
        /// <summary>
        /// Transfers the job in the foreground. Foreground transfers compete
        /// for network bandwidth with other applications, which can impede the
        /// user's network experience. This is the highest priority level.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FOREGROUND" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PRIORITY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_PRIORITY_FOREGROUND,

        /// <summary>
        /// Transfers the job in the background with a high priority. Background
        /// transfers use idle network bandwidth of the client to transfer
        /// files. This is the highest background priority level.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HIGH" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PRIORITY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_PRIORITY_HIGH,

        /// <summary>
        /// Transfers the job in the background with a normal priority.
        /// Background transfers use idle network bandwidth of the client to
        /// transfer files. This is the default priority level.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NORMAL" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PRIORITY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_PRIORITY_NORMAL,

        /// <summary>
        /// Transfers the job in the background with a low priority. Background
        /// transfers use idle network bandwidth of the client to transfer
        /// files. This is the lowest background priority level.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LOW" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PRIORITY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_PRIORITY_LOW
    }
}