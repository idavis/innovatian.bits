#region Using Directives

using System.Diagnostics.CodeAnalysis;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USER" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TYPE" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ENUM" )]
    [SuppressMessage( "Microsoft.Design", "CA1028:EnumStorageShouldBeInt32" )]
    internal enum BG_JOB_ENUM_USER_TYPE : uint
    {
        /// <summary>
        /// The user receives all jobs that they own in the transfer queue
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USER" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ENUM" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CURRENT" )]
        BG_JOB_ENUM_CURRENT_USER = 0,

        /// <summary>
        /// Includes all jobs in the transfer queue—those owned by the user and
        /// those owned by others. The user must be an administrator to use this
        /// flag.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USERS" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ENUM" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ALL" )]
        BG_JOB_ENUM_ALL_USERS = 1
    }
}