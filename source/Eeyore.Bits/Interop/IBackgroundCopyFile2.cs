#region Using Directives

using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// Use the IBackgroundCopyFile2 interface to specify a new remote name for the file and retrieve the list of ranges to download.
    /// 
    /// The IBackgroundCopyFile2 interface inherits from the IBackgroundCopyFile interface.
    /// 
    /// To get an IBackgroundCopyFile2 interface pointer, call the IBackgroundCopyFile::QueryInterface method using __uuidof(IBackgroundCopyFile2) for the interface identifier. Use the IBackgroundCopyFile2 interface pointer to call both the IBackgroundCopyFile and IBackgroundCopyFile2 methods.
    /// </summary>
    [BitsVersion( BitsVersion.Bits_20 )]
    [ComImport]
    [ComConversionLoss]
    [Guid( "83E81B93-0873-474D-8A8C-F2018B1A939C" )]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    internal interface IBackgroundCopyFile2 : IBackgroundCopyFile
    {
        /// <summary>
        /// Retrieves the ranges that you want to download from the remote file.
        /// </summary>
        /// <param name="RangeCount">
        /// Number of elements in Ranges.
        /// </param>
        /// <param name="Ranges">
        /// Array of BG_FILE_RANGE structures that specify the ranges to download. When done, call the CoTaskMemFree function to free Ranges.
        /// </param>
        /// <remarks>
        /// on failure, No ranges were specified or the job is an upload or upload-reply job. RangeCount is set to zero and Ranges is set to NULL.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetFileRanges( [In] [Out] ref uint RangeCount, [Out] IntPtr Ranges );

        /// <summary>
        /// Changes the remote name to a new URL in a download job.
        /// </summary>
        /// <param name="RemoteName">
        /// Null-terminated string that contains the name of the file on the server. For information on specifying the remote name, see the RemoteName member and Remarks section of the BG_FILE_INFO structure. 
        /// </param>
        /// <remarks>
        ///  Typically, you call this method if you want to change the protocol used to transfer the file (for example, from SMB to HTTP) or if you want to change the file name or path.
        /// 
        /// This method does not serialize when it returns. To serialize the change, suspend the job, call this method (if changing multiple files in the job, use a loop), and resume the job. Calling the IBackgroundCopyJob::Resume method serializes the change.
        /// 
        /// If the time stamp or file size of the new remote name is different from the previous remote name or the new server does not support checkpoint resume (for HTTP remote names), BITS restarts the download. Otherwise, the transfer resumes from the same position on the new server. BITS does not restart already transferred files.
        /// 
        /// If the remote name identifies a server message block (SMB) path, the following table identifies possible error codes that can occur after you resume the job. These errors place the job in the BG_JOB_STATE_ERROR state.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetRemoteName( [MarshalAs( UnmanagedType.LPWStr )] string RemoteName );
    }
}