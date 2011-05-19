#region Using Directives

using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// Use the IBackgroundCopyJob3 interface to download ranges of a file and change the prefix of a remote file name.
    /// 
    /// The IBackgroundCopyJob3 interface inherits from the IBackgroundCopyJob2 interface.
    /// 
    /// To get an IBackgroundCopyJob3 interface pointer, call the IBackgroundCopyJob::QueryInterface method using __uuidof(IBackgroundCopyJob3) for the interface identifier.
    /// 
    /// Use the IBackgroundCopyJob3 interface pointer to call the methods of the IBackgroundCopyJob, IBackgroundCopyJob2, and IBackgroundCopyJob3 interfaces.
    /// </summary>
    [BitsVersion( BitsVersion.Bits_20 )]
    [ComImport]
    [Guid( "443C8934-90FF-48ED-BCDE-26F5C7450042" )]
    [InterfaceType( (short) 1 )]
    internal interface IBackgroundCopyJob3 : IBackgroundCopyJob2
    {
        /// <summary>
        /// Specifies the owner and ACL information to maintain when using SMB to download or upload a file.
        /// </summary>
        /// <param name="Flags">
        /// Flags that identify the owner and ACL information to maintain when transferring a file using SMB. Subsequent calls to this method overwrite the previous flags. Specify 0 to remove the flags from the job. You can specify any combination of the following flags.
        /// </param>
        /// <remarks>
        /// These flags apply to remote file names that specify the SMB protocol. BITS ignores the flags for HTTP transfers.
        /// 
        /// BITS propagates the file time stamps and attributes (not extended attributes) for SMB files.
        /// 
        /// BITS applies the owner and ACL information to the file at the time the file transfer is complete, not when it creates the temporary transfer file. BITS does not specify a security descriptor when it creates the temporary transfer file (the file inherits the ACL information from the destination directory). If the transferred data is sensitive, the application should specify an appropriate ACL on the destination directory to prevent unauthorized access.
        /// 
        /// To ensure the proper owner and ACL information is set on all files in the job, call this method after you create the job and before calling the IBackgroundCopyJob::Resume method. Otherwise, those files that transferred before the flags were set will not contain the appropriate owner and ACL information.
        /// 
        /// This method is modeled after the XCopy DOS command.
        /// 
        /// The owner and ACL information is not maintained if you download to a FAT file system.
        /// 
        /// If the user does not have privileges on the local and remote computers to copy the owner or ACL information, BITS places the job in a transient error state and sets the error code to E_ACCESSDENIED.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetNotifyFlags( [In] BG_COPY_FILE_ACLFLAGS Flags );

        /// <summary>
        /// Retrieves the flags that identify the owner and ACL information to maintain when transferring a file using SMB.
        /// </summary>
        /// <param name="Flags"></param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetNotifyFlags( out BG_COPY_FILE_ACLFLAGS Flags );

        /// <summary>
        /// Replaces the beginning text of all remote names in the download job with the specified string.
        /// </summary>
        /// <param name="OldPrefix">
        /// Null-terminated string that identifies the text to replace in the remote name. The text must start at the beginning of the remote name.
        /// </param>
        /// <param name="NewPrefix">
        /// Null-terminated string that contains the replacement text.
        /// </param>
        /// <remarks>
        /// Typically, you use this method to change the server portion of the remote name when the server is unavailable or to let roaming users connect to the closest server. This method changes all matching remote names in the job. To change the remote name of a specific file, use the IBackgroundCopyFile2::SetRemoteName method.
        /// 
        /// The ReplaceRemotePrefix method performs a case-sensitive search of all the remote names in the job. If the beginning text of the remote name matches the string in OldPrefix, BITS replaces the text with the string found in NewPrefix. For example, to change "http://Server/Path/File.ext" to "http://NewServerName/Path/File.ext", set OldPrefix to "http://Server" and NewPrefix to "http://NewServerName". Note that BITS does not perform locale conversions in the search.
        /// 
        /// If the time stamp or file size of the new remote name is different from the previous remote name or the new server does not support checkpoint resume (for HTTP remote names), BITS restarts the download. Otherwise, the transfer resumes from the same position on the new server. BITS does not restart already transferred files.
        /// 
        /// You can use this method to change protocols. However, the resulting URL may not be well formed. For example, changing from \\Server\Dir\File.ext to http://Server\Dir\File.ext may not resolve. Consider using the IBackgroundCopyFile2::SetRemoteName method instead.
        /// 
        /// Note that this method may not find URLs to change if you called the IBackgroundCopyJobHttpOptions::SetSecurityFlags method and set the BG_HTTP_REDIRECT_POLICY_ALLOW_REPORT flag. This policy changes the original URL to the final, redirected URL if the URL is redirected.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void ReplaceRemotePrefix( [In] [MarshalAs( UnmanagedType.LPWStr )] string OldPrefix,
                                  [In] [MarshalAs( UnmanagedType.LPWStr )] string NewPrefix );

        /// <summary>
        /// Adds a file to a download job and specifies the ranges of the file you want to download.
        /// </summary>
        /// <param name="RemoteUrl">
        ///     Null-terminated string that contains the name of the file on the server. For information on specifying the remote name, see the RemoteName member and Remarks section of the BG_FILE_INFO structure. BITS does not support the SMB protocol for ranges.
        /// 
        ///        BITS 2.5 and 2.0:  BITS supports the SMB protocol for ranges.
        /// </param>
        /// <param name="LocalName">
        /// Null-terminated string that contains the name of the file on the client. For information on specifying the local name, see the LocalName member and Remarks section of the BG_FILE_INFO structure.
        /// </param>
        /// <param name="RangeCount">
        /// Number of elements in Ranges.
        /// </param>
        /// <param name="Ranges">
        /// Array of one or more BG_FILE_RANGE structures that specify the ranges to download. Do not specify duplicate or overlapping ranges. 
        /// </param>
        /// <remarks>
        /// The ranges are written to the LocalName file in the order given. For example, if Ranges identifies bytes 100-199, 900-999, and 400-499 of the remote file, the local file will be 300 bytes long. Bytes 0-99 of the local file will contain bytes 100-199 of the remote file, bytes 100-199 of the local file will contain bytes 900-999 of the remote file, and bytes 200-299 of the local file will contain bytes 400-499 of the remote file.
        /// 
        /// The following table identifies possible error codes that can occur after you resume the job. These errors place the job in the BG_JOB_STATE_ERROR state.
        /// 
        /// Error code	Description
        /// BG_E_INVALID_SERVER_RESPONSE	BITS does not support servers that consolidate duplicate or overlapping ranges.
        /// BG_E_INVALID_RANGE	One of the ranges is outside the boundaries of the remote file.
        /// BG_E_INSUFFICIENT_RANGE_SUPPORT	The server does not support ranges.
        /// 
        /// BITS guarantees that the version of a file (based on file size and date, not content) that it transfers will be consistent; however, it does not guarantee that a set of files will be consistent. For example, if BITS is in the middle of downloading the second of two files in the job at the time that the files are updated on the server, BITS restarts the download of the second file; however, the first file is not downloaded again.
        /// 
        /// By default, a user can add up to 500 ranges for a file. This limit does not apply to administrators or service accounts. To change the default, set the MaxRangesPerFile group policy.
        /// 
        ///     Prior to Windows Vista:  There is no limit on the number of files that a user can add to a job.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void AddFileWithRanges( [In] [MarshalAs( UnmanagedType.LPWStr )] string RemoteUrl,
                                [In] [MarshalAs( UnmanagedType.LPWStr )] string LocalName, [In] uint RangeCount,
                                [In] ref _BG_FILE_RANGE Ranges );
    }
}