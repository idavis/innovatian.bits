#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.InteropServices;
using FILETIME=System.Runtime.InteropServices.ComTypes.FILETIME;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// The BG_JOB_TIMES structure provides job-related time stamps.
    /// </summary>
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
    [SuppressMessage( "Microsoft.Performance", "CA1815:OverrideEqualsAndOperatorEqualsOnValueTypes" )]
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TIMES" )]
    [StructLayout( LayoutKind.Sequential, Pack = 4 )]
    internal struct _BG_JOB_TIMES
    {
        /// <summary>
        /// Time the job was created. The time is specified as FILETIME.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        public FILETIME CreationTime;

        /// <summary>
        /// Time the job was last modified or bytes were transferred. Adding
        /// files or calling any of the set methods in the IBackgroundCopyJob*
        /// interfaces changes this value. In addition, changes to the state of
        /// the job and calling the Suspend, Resume, Cancel, and Complete
        /// methods change this value. The time is specified as FILETIME.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        public FILETIME ModificationTime;

        /// <summary>
        /// Time the job entered the BG_JOB_STATE_TRANSFERRED state. The time is
        /// specified as FILETIME.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        public FILETIME TransferCompletionTime;
    }
}