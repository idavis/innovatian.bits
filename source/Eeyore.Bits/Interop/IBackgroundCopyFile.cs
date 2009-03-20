#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// The IBackgroundCopyFile interface contains information about a file that
    /// is part of a job. For example, you can use IBackgroundCopyFile methods
    /// to retrieve the local and remote names of the file and transfer progress
    /// information.
    /// 
    /// To get an IBackgroundCopyFile interface pointer, call the
    /// IBackgroundCopyError::GetFile method or the
    /// IEnumBackgroundCopyFiles::Next method.
    /// </summary>
    [ComImport]
    [Guid( "01B7BD23-FB88-4A77-8490-5891D3E4653A" )]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    internal interface IBackgroundCopyFile
    {
        /// <summary>
        /// Retrieves the remote name of the file.
        /// </summary>
        /// <param name="ppName">
        /// Null-terminated string that contains the remote name of the file to
        /// transfer. The name is fully qualified. Call the CoTaskMemFree
        /// function to free ppName when done.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetRemoteName( [MarshalAs( UnmanagedType.LPWStr )] out string ppName );

        /// <summary>
        /// Retrieves the local name of the file.
        /// </summary>
        /// <param name="ppName">
        /// Null-terminated string that contains the name of the file on the
        /// client. The name is fully qualified. Call the CoTaskMemFree function
        /// to free ppName when done.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetLocalName( [MarshalAs( UnmanagedType.LPWStr )] out string ppName );

        /// <summary>
        /// Retrieves information on the progress of the file transfer.
        /// </summary>
        /// <param name="pProgress">
        /// Structure whose members indicate the progress of the file transfer.
        /// For details on the type of progress information available, see the
        /// BG_FILE_PROGRESS structure.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetProgress( out _BG_FILE_PROGRESS pProgress );
    }
}