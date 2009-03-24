#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// The BG_FILE_INFO structure provides the local and remote names of the
    /// file to transfer.
    /// </summary>
    /// <remarks>
    /// BITS supports the HTTP, HTTPS, and SMB protocols for RemoteName. For
    /// HTTP requirements, see HTTP Requirements for BITS Downloads.
    /// 
    /// BITS 1.5 and earlier:  The SMB protocol for RemoteName is not supported.
    /// 
    /// The following identifies whether BITS propagates a file's time stamps:
    ///     For HTTP downloads, BITS propagates the file's modification time
    ///     stamp and sets the file's creation time to the modification time.
    ///     For HTTP uploads, BITS does not propagate the file's time stamps.
    ///     For SMB downloads and uploads, BITS propagates the file's time
    ///     stamps.
    /// 
    /// BITS does not support SMB paths to named pipes or devices. To maintain
    /// the owner and ACL information for files downloaded using SMB, call the
    /// IBackgroundCopyJob3::SetFileACLFlags method.
    /// 
    /// If the path and file name portion of the URL for an HTTP upload and
    /// upload-reply job contains Unicode characters not in common to the code
    /// page on both the client and server, the URL translation will fail on the
    /// server and the BITS job will be placed in the error state. If the server
    /// portion of the URL contains Unicode characters, you must encode the
    /// server portion using Internationalized Domain Names (IDN).
    /// 
    /// BITS does not limit the size of file you can download using HTTP. For
    /// upload limits, see the BITSMaximumUploadSize IIS extension property. 
    ///     IIS 5.0:  Downloads are limited to 4 GB.
    ///     BITS 1.2 and earlier:  For HTTP downloads, the maximum file size 
    ///     you can transfer is 4 GB; BITS cannot guarantee the successful 
    ///     transfer of files over 4 GB. 
    ///     If the URL contains Unicode characters that are not in the US-ASCII
    ///     character set, encode the Unicode string in UTF-8 before passing it
    ///     as the remote file name to BITS. If you do not encode the string,
    ///     the HTTP server may receive an incorrect URL and the job may enter
    ///     the error state.
    /// </remarks>
#if x64
    [StructLayout( LayoutKind.Sequential, Pack = 8 )]
#else
    [StructLayout( LayoutKind.Sequential, Pack = 4 )]
#endif
    [SuppressMessage("Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INFO")]
    [SuppressMessage("Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE")]
    [SuppressMessage("Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores")]
    [SuppressMessage("Microsoft.Performance", "CA1815:OverrideEqualsAndOperatorEqualsOnValueTypes")]
    internal struct _BG_FILE_INFO
    {
        /// <summary>
        /// Null-terminated string that contains the name of the file on the
        /// server (for example, http://[server]/[path]/file.ext). The format of
        /// the name must conform to the transfer protocol you use. You cannot
        /// use wildcards in the path or file name. The URL must contain only
        /// legal URL characters; no escape processing is performed. The URL is
        /// limited to 2,200 characters, not including the null terminator. Each
        /// segment of the URL is limited to MAX_PATH characters. You can use
        /// SMB to express the remote name of the file to download or upload;
        /// there is no SMB support for upload-reply jobs. You can specify the
        /// remote name as a UNC path, full path with a network drive, or use
        /// the "file://" prefix.
        /// </summary>
        /// <remarks>
        /// BITS 1.5 and earlier:  The SMB protocol for RemoteName is not supported.
        /// </remarks>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        [MarshalAs( UnmanagedType.LPWStr )]
        public string RemoteName;

        /// <summary>
        /// Null-terminated string that contains the name of the file on the
        /// client. The file name must include the full path (for example,
        /// d:\myapp\updates\file.ext). You cannot use wildcards in the path or
        /// file name, and directories in the path must exist. The path is
        /// limited to MAX_PATH, not including the null terminator. The user
        /// must have permission to write to the local directory for downloads
        /// and the reply portion of an upload-reply job. BITS does not support
        /// NTFS streams. Instead of using network drives, which are session
        /// specific, use UNC paths (for example, \\server\share\path\file). Do
        /// not include the \\? prefix in the path.
        /// </summary>
        [SuppressMessage( "Microsoft.Design", "CA1051:DoNotDeclareVisibleInstanceFields" )]
        [MarshalAs( UnmanagedType.LPWStr )]
        public string LocalName;
    }
}