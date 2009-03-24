#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// The BG_FILE_PROGRESS structure provides file-related progress
    /// information, such as the number of bytes transferred.
    /// </summary>
    /// <remarks>
    /// To determine if BITS transferred the file, you can:
    ///     Compare BytesTransferred to BytesTotal. Implement the
    ///     IBackgroundCopyCallback2::FileTransferred callback.
    /// 
    /// Note that the progress values will be set back to zero if the time stamp
    /// of the URL changes.
    /// </remarks>
    [SuppressMessage( "Microsoft.Performance", "CA1815:OverrideEqualsAndOperatorEqualsOnValueTypes" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROGRESS" )]
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    [StructLayout( LayoutKind.Sequential, Pack = 8)]
    internal struct _BG_FILE_PROGRESS
    {
        /// <summary>
        /// Size of the file in bytes. If BITS cannot determine the size of the
        /// file (for example, if the file or server does not exist), the value
        /// is BG_SIZE_UNKNOWN.
        /// 
        /// If you are downloading ranges from a file, BytesTotal reflects the
        /// total number of bytes you want to download from the file.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        public ulong BytesTotal;

        /// <summary>
        /// Number of bytes transferred.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        public ulong BytesTransferred;

        /// <summary>
        /// For downloads, the value is TRUE if the file is available to the
        /// user; otherwise, the value is FALSE. Files are available to the user
        /// after calling the IBackgroundCopyJob::Complete method. If the
        /// Complete method generates a transient error, those files processed
        /// before the error occurred are available to the user; the others are
        /// not. Use the Completed member to determine if the file is available
        /// to the user when Complete fails. 
        /// 
        /// For uploads, the value is TRUE when the file upload is complete;
        /// otherwise, the value is FALSE.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        public int Completed;
    }
}