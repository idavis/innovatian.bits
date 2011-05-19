#region Using Directives

using System;
using System.Diagnostics.CodeAnalysis;

#endregion

namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// BG_NOTIFY_FLAGS specifies the events that you want to receive.
    /// </summary>
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOTIFY" )]
    [SuppressMessage( "Microsoft.Design", "CA1028:EnumStorageShouldBeInt32" )]
    [SuppressMessage( "Microsoft.Naming", "CA1714:FlagsEnumsShouldHavePluralNames" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FLAGS" )]
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    [SuppressMessage( "Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId = "FLAGS" )]
    [Flags]
    internal enum BG_NOTIFY_FLAGS : uint
    {
        /// <summary>
        /// All of the files in the job have been transferred.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOTIFY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TRANSFERRED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_NOTIFY_JOB_TRANSFERRED = 0x0001,

        /// <summary>
        /// An error has occurred.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOTIFY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_NOTIFY_JOB_ERROR = 0x0002,

        /// <summary>
        /// Event notification is disabled. BITS ignores the other flags.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "DISABLE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOTIFY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_NOTIFY_DISABLE = 0x0004,

        /// <summary>
        /// The job has been modified. For example, a property value changed,
        /// the state of the job changed, or progress is made transferring the
        /// files. This flag is ignored if command line notification is
        /// specified.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MODIFICATION" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOTIFY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_NOTIFY_JOB_MODIFICATION = 0x0008,

        /// <summary>
        /// A file in the job has been transferred. This flag is ignored if
        /// command line notification is specified.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOTIFY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TRANSFERRED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_NOTIFY_FILE_TRANSFERRED = 0x0010
    }
}