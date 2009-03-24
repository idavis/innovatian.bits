#region Using Directives

using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    ///  Use the IBackgroundCopyJob2 interface to retrieve reply data from an
    ///  upload-reply job, determine the progress of the reply data transfer to
    ///  the client, request command line execution, and provide credentials for
    ///  proxy and remote server authentication requests.
    /// 
    /// The IBackgroundCopyJob2 interface inherits from the IBackgroundCopyJob
    /// interface.
    /// 
    /// To get an IBackgroundCopyJob2 interface pointer, call the
    /// IBackgroundCopyJob::QueryInterface method using
    /// __uuidof(IBackgroundCopyJob2) for the interface identifier. Use the
    /// IBackgroundCopyJob2 interface pointer to call both the
    /// IBackgroundCopyJob and IBackgroundCopyJob2 methods.
    /// </summary>
    [ComImport]
    [Guid( "54B50739-686F-45EB-9DFF-D6A9A0FAA9AF" )]
    [InterfaceType( (short) 1 )]
    [ComConversionLoss]
    [BitsVersion( BitsVersion.Bits_15 )]
    internal interface IBackgroundCopyJob2 : IBackgroundCopyJob
    {
        /// <summary>
        /// Specifies a program to execute if the job enters the
        /// BG_JOB_STATE_ERROR or BG_JOB_STATE_TRANSFERRED state. BITS executes
        /// the program in the context of the user who called this method.
        /// </summary>
        /// <param name="Program">
        /// Null-terminated string that contains the program to execute. The
        /// pProgram parameter is limited to MAX_PATH characters, not including
        /// the null terminator. You should specify a full path to the program;
        /// the method will not use the search path to locate the program.
        ///
        /// To remove command line notification, set pProgram and pParameters to
        /// NULL. The method fails if pProgram is NULL and pParameters is
        /// non-NULL.
        /// </param>
        /// <param name="Parameters">
        /// Null-terminated string that contains the parameters of the program
        /// in pProgram. The first parameter must be the program in pProgram
        /// (use quotes if the path uses long file names). The pParameters
        /// parameter is limited to 4,000 characters, not including the null
        /// terminator. This parameter can be NULL.
        /// </param>
        /// <remarks>
        /// BITS calls the CreateProcessAsUser function to launch the program.
        /// 
        /// Your program should return an exit code of zero. If your program
        /// does not return an exit code of zero, BITS checks the state of the
        /// job. If the program did not cancel or complete the job, BITS calls
        /// the program again after the minimum retry delay specified for the
        /// job expires.
        /// 
        ///     BITS 1.5 and earlier:  BITS calls the program only once. 
        /// 
        /// To execute a script, specify WScript.exe (include the full path to
        /// WScript.exe) in pProgram. The pParameters parameter should include
        /// WScript.exe, the script name, and any arguments.
        /// 
        /// If your program requires job related information, you must pass this
        /// information as arguments. Do not include environment variables, such
        /// as %system32%, in pProgram or pParameters — they are not expanded.
        /// 
        /// You should include the full path to the program. If any of the
        /// arguments in pParameters include a path that uses long file names,
        /// such as the module name, use quotes around the path.
        /// 
        /// If the program you want to execute uses the reply or download file,
        /// the program must call the IBackgroundCopyJob::Complete method to
        /// make the files available to the client.
        /// 
        /// Call the IBackgroundCopyJob::SetNotifyFlags method to specify when
        /// to execute the program. You can request command line execution only
        /// for job error or transferred events, not job modification events.
        /// Note that BITS still executes the command line even if you call the
        /// SetNotifyCmdLine method after the event occurs.
        /// 
        /// If you call both the SetNotifyCmdLine method and the
        /// IBackgroundCopyJob::SetNotifyInterface method, BITS will execute the
        /// command line only if the notification interface becomes invalid or
        /// the notification method that BITS calls returns a failure code. For
        /// example, if the notification method that BITS calls returns a
        /// E_FAIL, BITS will execute the command line. However, if the
        /// notification method returns S_OK, BITS will not execute the command
        /// line. If the notification method and command line execution request
        /// both fail, BITS will send the notification again after the minimum
        /// retry period expires.
        /// 
        /// Note that calling the IBackgroundCopyJob::TakeOwnership method
        /// removes command line notification from the job.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetNotifyCmdLine( [In] [MarshalAs( UnmanagedType.LPWStr )] string Program,
                               [In] [MarshalAs( UnmanagedType.LPWStr )] string Parameters );

        /// <summary>
        /// Retrieves the program to execute when the job enters the error or
        /// transferred state.
        /// </summary>
        /// <param name="pProgram">
        /// Null-terminated string that contains the program to execute when the
        /// job enters the error or transferred state. Call the CoTaskMemFree
        /// function to free pProgram when done.
        /// </param>
        /// <param name="pParameters">
        /// Null-terminated string that contains the arguments of the program in
        /// pProgram. Call the CoTaskMemFree function to free pParameters when
        /// done.
        /// </param>
        /// <remarks>
        /// The GetNotifyCmdLine method sets pProgram and pParameters to an
        /// empty string (L"") if the IBackgroundCopyJob2::SetNotifyCmdLine
        /// method has not been called.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetNotifyCmdLine( [MarshalAs( UnmanagedType.LPWStr )] out string pProgram,
                               [MarshalAs( UnmanagedType.LPWStr )] out string pParameters );

        /// <summary>
        /// Retrieves progress information related to the transfer of the reply
        /// data from an upload-reply job. 
        /// </summary>
        /// <param name="pProgress">
        /// Contains information that you use to calculate the percentage of the
        /// reply file transfer that is complete. For more information, see
        /// BG_JOB_REPLY_PROGRESS.
        /// </param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetReplyProgress( [In] [Out] ref _BG_JOB_REPLY_PROGRESS pProgress );

        /// <summary>
        /// Retrieves an in-memory copy of the reply data from the server
        /// application. Call this method only if the job's type is
        /// BG_JOB_TYPE_UPLOAD_REPLY and its state is BG_JOB_STATE_TRANSFERRED.
        /// </summary>
        /// <param name="ppBuffer">
        /// Buffer to contain the reply data. The method sets ppBuffer to NULL
        /// if the server application did not return a reply. Call the
        /// CoTaskMemFree function to free ppBuffer when done.
        /// </param>
        /// <param name="pSize">
        /// Size, in bytes, of the reply data in ppBuffer.
        /// </param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetReplyData([Out] IntPtr ppBuffer, [In] [Out] ref ulong pSize );

        /// <summary>
        /// Specifies the name of the file to contain the reply data from the
        /// server application. Call this method only if the job's type is
        /// BG_JOB_TYPE_UPLOAD_REPLY.
        /// </summary>
        /// <param name="ReplyFileName">
        /// Null-terminated string that contains the full path to the reply
        /// file. BITS generates the file name if ReplyFileNamePathSpec is NULL
        /// or an empty string. You cannot use wildcards in the path or file
        /// name, and directories in the path must exist. The path is limited to
        /// MAX_PATH, not including the null terminator. The user must have
        /// permissions to write to the directory. BITS does not support NTFS
        /// streams. Instead of using network drives, which are session
        /// specific, use UNC paths (for example, \\server\share\path\file). Do
        /// not include the \\? prefix in the path.
        /// </param>
        /// <remarks>
        /// BITS generates the file name if you do not call the SetReplyFileName
        /// method before calling the IBackgroundCopyJob::Resume method for the
        /// first time.
        /// 
        /// If BITS generates the file name, the reply file is written to the
        /// same directory as the local upload file.
        /// 
        /// You can call the SetReplyFileName method anytime before BITS begins
        /// downloading the reply from the server application; the method fails
        /// if the download has begun.
        /// 
        /// The reply file is available to the client after calling the
        /// IBackgroundCopyJob::Complete method. To retrieve the reply data
        /// before calling the Complete method, call the
        /// IBackgroundCopyJob2::GetReplyData method.
        /// 
        /// The file is empty if the server application did not provide a reply.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetReplyFileName( [In] [MarshalAs( UnmanagedType.LPWStr )] string ReplyFileName );

        /// <summary>
        /// Retrieves the name of the file that contains the reply data from the
        /// server application. Call this method only if the job type is
        /// BG_JOB_TYPE_UPLOAD_REPLY.
        /// </summary>
        /// <param name="pReplyFileName">
        /// Null-terminated string that contains the full path to the reply
        /// file. Call the CoTaskMemFree function to free pReplyFileName when
        /// done.
        /// </param>
        /// <remarks>
        /// To specify a reply file name, call the
        /// IBackgroundCopyJob2::SetReplyFileName method. If you did not specify
        /// a name, the GetReplyFileName method returns the name that BITS
        /// generated for you. If you did not specify a name and you called this
        /// method before adding a file to the job, pReplyFileName is set to
        /// NULL.
        /// 
        /// You must call the IBackgroundCopyJob::Complete method before opening
        /// and reading the reply file; the reply file is not available to the
        /// client until you call the Complete method.
        /// 
        /// The file is empty if the server application did not provide a reply.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetReplyFileName( [MarshalAs( UnmanagedType.LPWStr )] out string pReplyFileName );

        /// <summary>
        /// Specifies the credentials to use for a proxy or remote server user
        /// authentication request.
        /// </summary>
        /// <param name="Credentials">
        /// Identifies the target (proxy or server), authentication scheme, and
        /// the user's credentials to use for user authentication. For details,
        /// see the BG_AUTH_CREDENTIALS structure.
        /// </param>
        /// <remarks>
        ///  BITS provides the credentials to a proxy or server in response to a
        ///  request for user authentication. Set the credentials before the
        ///  initial call to Resume.
        /// 
        /// You must call this method for each target and scheme pair that you
        /// want to provide. For example, if you want to specify proxy
        /// credentials for both Basic and Digest authentication, you would call
        /// this method once to specify the Basic credentials and a second time
        /// to specify the Digest credentials.
        /// 
        /// If the job currently contains credentials with the same target and
        /// scheme pair, the existing credentials are replaced with the new
        /// credentials. The credentials persist for the life of the job. To
        /// remove the credentials from the job, call the
        /// IBackgroundCopyJob2::RemoveCredentials method.
        /// 
        /// If you know the schemes the proxy or server will request, you can
        /// provide only those credentials. Otherwise, provide credentials for
        /// all schemes.
        /// 
        /// The job enters the BG_JOB_STATE_ERROR state if you do not provide
        /// the credentials requested by the proxy or server, or the proxy or
        /// server cannot authenticate the credentials. Check the error code to
        /// determine if the authentication failed at the server
        /// (BG_E_HTTP_ERROR_401) or proxy (BG_E_HTTP_ERROR_407). To retrieve
        /// the error code, call the IBackgroundCopyJob::GetError method to
        /// retrieve an IBackgroundCopyError interface pointer. Then, call the
        /// IBackgroundCopyError::GetError method to retrieve the error code.
        /// After you determine where the authentication failed (proxy or
        /// server), specify new credentials to use for the proxy or server and
        /// call the IBackgroundCopyJob::Resume method to resume the job.
        /// Because you cannot determine which scheme failed, specify
        /// credentials for all schemes before calling the Resume method.
        /// 
        /// There is no method to retrieve credentials that you have set.
        /// 
        /// You must call this method in the context of the job's owner.
        /// 
        /// Calling the IBackgroundCopyJob::TakeOwnership method removes the
        /// credentials from the job.
        /// 
        /// To specify implicit credentials (the logged on user's credentials),
        /// set the scheme to NTLM and the user name and password to NULL. If
        /// you specify implicit credentials for a proxy, BITS will also use the
        /// implicit credentials for server authentication unless you specify
        /// explicit server credentials.
        /// 
        /// Note  BITS ignores credentials for remote names that specify an SMB path.
        /// 
        /// Note  BITS does not authenticate the server or encrypt the channel. Use HTTPS if this is an issue for your application.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetCredentials( ref BG_AUTH_CREDENTIALS Credentials );

        /// <summary>
        /// Removes credentials from use. The credentials must match an existing
        /// target and scheme pair that you specified using the
        /// IBackgroundCopyJob2::SetCredentials method. There is no method to
        /// retrieve the credentials you have set.
        /// </summary>
        /// <param name="Target">
        /// Identifies whether to use the credentials for proxy or server
        /// authentication.
        /// </param>
        /// <param name="Scheme">
        /// Identifies the authentication scheme to use (basic or one of several
        /// challenge-response schemes). For details, see the BG_AUTH_SCHEME
        /// enumeration.
        /// </param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void RemoveCredentials( BG_AUTH_TARGET Target, BG_AUTH_SCHEME Scheme );
    }
}