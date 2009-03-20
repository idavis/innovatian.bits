#region Using Directives

using System.Diagnostics.CodeAnalysis;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    [SuppressMessage( "Microsoft.Naming", "CA1712:DoNotPrefixEnumValuesWithTypeName" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    internal enum BG_ERROR_CONTEXT
    {
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NONE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_ERROR_CONTEXT_NONE,
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "UNKNOWN" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_ERROR_CONTEXT_UNKNOWN,
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "GENERAL" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MANAGER" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "QUEUE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_ERROR_CONTEXT_GENERAL_QUEUE_MANAGER,
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MANAGER" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOTIFICATION" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "QUEUE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_ERROR_CONTEXT_QUEUE_MANAGER_NOTIFICATION,
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LOCAL" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_ERROR_CONTEXT_LOCAL_FILE,
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "REMOTE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_ERROR_CONTEXT_REMOTE_FILE,
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "GENERAL" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TRANSPORT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_ERROR_CONTEXT_GENERAL_TRANSPORT,
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "APPLICATION" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONTEXT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "REMOTE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_ERROR_CONTEXT_REMOTE_APPLICATION
    }
}