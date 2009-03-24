#region Using Directives

using System.Diagnostics.CodeAnalysis;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// The BG_JOB_PROXY_USAGE enumeration defines constant values that specify
    /// which proxy to use for file transfers. You can define different proxy
    /// settings for each job.
    /// </summary>
    [SuppressMessage( "Microsoft.Naming", "CA1712:DoNotPrefixEnumValuesWithTypeName" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROXY" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USAGE" )]
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    internal enum BG_JOB_PROXY_USAGE
    {
        /// <summary>
        /// Use the proxy and proxy bypass list settings defined by each user to
        /// transfer files. Settings are user-defined from Control Panel,
        /// Internet Options, Connections, Local Area Network (LAN) settings (or
        /// Dial-up settings, depending on the network connection).
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PRECONFIG" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROXY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USAGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_PROXY_USAGE_PRECONFIG,

        /// <summary>
        /// Do not use a proxy to transfer files. Use this option when you
        /// transfer files within a LAN.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROXY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USAGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_PROXY_USAGE_NO_PROXY,

        /// <summary>
        /// Use the application's proxy and proxy bypass list to transfer files.
        /// Use this option when you cannot trust that the system settings are
        /// correct. Also use this option when you want to transfer files using
        /// a special account, such as LocalSystem, to which the system settings
        /// do not apply.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "OVERRIDE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROXY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USAGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_PROXY_USAGE_OVERRIDE,

        /// <summary>
        /// Automatically detect proxy settings. BITS detects proxy settings for
        /// each file in the job.
        /// </summary>
        /// <remarks>
        /// This is only available on Windows Vista and higher.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1702:CompoundWordsShouldBeCasedCorrectly", MessageId = "AUTODETECT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "AUTODETECT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROXY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USAGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_PROXY_USAGE_AUTODETECT
    }
}