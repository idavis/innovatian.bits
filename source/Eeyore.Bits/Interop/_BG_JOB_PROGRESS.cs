#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// The BG_JOB_PROGRESS structure provides job-related progress information,
    /// such as the number of bytes and files transferred. For upload jobs, the
    /// progress applies to the upload file, not the reply file. To view reply
    /// file progress, see the BG_JOB_REPLY_PROGRESS structure.
    /// </summary>
    [SuppressMessage( "Microsoft.Performance", "CA1815:OverrideEqualsAndOperatorEqualsOnValueTypes" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROGRESS" )]
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    [StructLayout( LayoutKind.Sequential, Pack = 8 )]
    internal struct _BG_JOB_PROGRESS
    {
        /// <summary>
        /// Total number of bytes to transfer for all files in the job. If the
        /// value is BG_SIZE_UNKNOWN, the total size of all files in the job has
        /// not been determined. BITS does not set this value if it cannot
        /// determine the size of one of the files. For example, if the
        /// specified file or server does not exist, BITS cannot determine the
        /// size of the file.
        /// 
        /// If you are downloading ranges from the file, BytesTotal includes the
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
        /// Total number of files to transfer for this job.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        public uint FilesTotal;

        /// <summary>
        /// Number of files transferred.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        public uint FilesTransferred;
    }
}