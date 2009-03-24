#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// Use the IBackgroundCopyError interface to determine the cause of an
    /// error and if the transfer process can proceed.
    /// 
    /// BITS creates an error object only when the state of the job is
    /// BG_JOB_STATE_ERROR or BG_JOB_STATE_TRANSIENT_ERROR. BITS does not create
    /// an error object when an IBackgroundCopyXXXX interface method fails. The
    /// error object is available until BITS begins transferring data (the state
    /// of the job changes to BG_JOB_STATE_TRANSFERRING) for the job or until
    /// your application exits.
    /// 
    /// To get an IBackgroundCopyError object, call the
    /// IBackgroundCopyJob::GetError method.
    /// </summary>
    [ComImport]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    [Guid( "19C613A0-FCB8-4F28-81AE-897C3D078F81" )]
    internal interface IBackgroundCopyError
    {
        /// <summary>
        /// Retrieves the error code and identify the context in which the error
        /// occurred.
        /// </summary>
        /// <param name="pContext">
        /// Context in which the error occurred. For a list of context values,
        /// see the BG_ERROR_CONTEXT enumeration.
        /// </param>
        /// <param name="pErrorCode">
        /// Error code of the error that occurred.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "1#" )]
        void GetError( out BG_ERROR_CONTEXT pContext,
                       [MarshalAs( UnmanagedType.Error )] out int pErrorCode );

        /// <summary>
        /// Retrieves an interface pointer to the file object associated with
        /// the error.
        /// </summary>
        /// <param name="ppFile">
        /// An IBackgroundCopyFile interface pointer whose methods you use to
        /// determine the local and remote file names associated with the error.
        /// The ppFile parameter is set to NULL if the error is not associated
        /// with the local or remote file. When done, release ppFile.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetFile( [MarshalAs( UnmanagedType.Interface )] out IBackgroundCopyFile ppFile );

        /// <summary>
        /// Retrieves the error text associated with the error.
        /// </summary>
        /// <param name="LanguageId">
        /// Identifies the locale to use to generate the description. To create
        /// the language identifier, use the MAKELANGID macro. For example, to
        /// specify U.S. English, use the following code sample. 
        /// 
        /// MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US)
        /// 
        /// To retrieve the system's default user language identifier, use the
        /// following calls.
        /// 
        /// LANGIDFROMLCID(GetThreadLocale())
        /// </param>
        /// <param name="pErrorDescription">
        /// Null-terminated string that contains the error text associated with
        /// the error. Call the CoTaskMemFree function to free
        /// ppErrorDescription when done.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Language" )]
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "1#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetErrorDescription( [In] uint LanguageId, [MarshalAs( UnmanagedType.LPWStr )] out string pErrorDescription );

        /// <summary>
        /// Retrieves the description of the context in which the error
        /// occurred.
        /// </summary>
        /// <param name="LanguageId">
        /// Identifies the locale to use to generate the description. To create
        /// the language identifier, use the MAKELANGID macro. For example, to
        /// specify U.S. English, use the following code sample. 
        /// 
        /// MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US)
        /// 
        /// To retrieve the system's default user language identifier, use the
        /// following calls.
        /// 
        /// LANGIDFROMLCID(GetThreadLocale())
        /// </param>
        /// <param name="ppContextDescription">
        /// Null-terminated string that contains the description of the context
        /// in which the error occurred. Call the CoTaskMemFree function to free
        /// ppContextDescription when done.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Language" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "1#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetErrorContextDescription( [In] uint LanguageId,
                                         [MarshalAs( UnmanagedType.LPWStr )] out string ppContextDescription );

        /// <summary>
        /// Retrieves the protocol used to transfer the file. The remote file
        /// name identifies the protocol to use to transfer the file.
        /// </summary>
        /// <param name="ppProtocol">
        /// Null-terminated string that contains the protocol used to transfer
        /// the file. The string contains "http" for the HTTP protocol and
        /// "file" for the SMB protocol. The ppProtocol parameter is set to NULL
        /// if the error is not related to the transfer protocol. Call the
        /// CoTaskMemFree function to free ppProtocol when done.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetProtocol( [MarshalAs( UnmanagedType.LPWStr )] out string ppProtocol );
    }
}