#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// Implement the IBackgroundCopyCallback interface to receive notification
    /// that a job is complete, has been modified, or is in error. Clients use
    /// this interface instead of polling for the status of the job.
    /// </summary>
    /// <remarks>
    /// To receive notifications, call the
    /// IBackgroundCopyJob::SetNotifyInterface method to specify the interface
    /// pointer to your IBackgroundCopyCallback implementation. To specify which
    /// notifications you want to receive, call the
    /// IBackgroundCopyJob::SetNotifyFlags method.
    /// 
    /// BITS will call your callbacks as long as the interface pointer is valid.
    /// The notification interface is no longer valid when your application
    /// terminates; BITS does not persist the notify interface. As a result,
    /// your application's initialization process should call the
    /// SetNotifyInterface method on those existing jobs for which you want to
    /// receive notification.
    /// 
    /// BITS guarantees to call your callback at least once, even if the
    /// registration occurs after the event. For example, if you request
    /// notification of a job transfer after the transfer occurred, you will
    /// receive the job transferred callback. Also, if a job received a
    /// notification and the pointer is subsequently no longer valid, that job
    /// would receive another notification if you later set the interface
    /// pointer on that job.
    /// 
    /// You must implement all methods of the IBackgroundCopyCallback interface.
    /// For example, if you do not register for the job modification callback,
    /// the JobModification method must still return S_OK.
    /// 
    /// The JobModification callbacks are launched using low priority threads
    /// whereas the JobTransferred and the JobError callbacks are launched using
    /// higher priority threads. So it is possible that while some
    /// JobModification callbacks are pending the JobTransferred callback is
    /// received by the client first although it is launched after the pending
    /// JobModification callbacks.
    /// 
    /// BITS supports up to four simultaneous notifications per user. If one or
    /// more applications block all four notifications for a user from
    /// returning, an application running as the same user will not receive
    /// notifications until one or more of the blocking notifications return. To
    /// reduce the chance that your callback blocks other notifications, keep
    /// your implementation short. 
    /// 
    /// If an administrator takes ownership of the job, the notification
    /// callbacks are made in the context of the user who requested
    /// notification.
    /// 
    /// If your application uses the single-threaded apartment model, your
    /// callback methods can become reentrant if you call COM objects from
    /// inside your callback method. For example, if you call
    /// IBackgroundCopyJob::GetProgress from inside your JobModification
    /// callback, BITS can send your job modification callback another
    /// notification while you are still processing the current notification. If
    /// it is not important to your application to respond to every
    /// JobModification callback, you could ignore reentrant callbacks 
    /// </remarks>
    [ComImport]
    [Guid( "97EA99C7-0186-4AD4-8DF9-C5B4E0ED6B22" )]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    internal interface IBackgroundCopyCallback
    {
        /// <summary>
        /// BITS calls your implementation of the JobTransferred method when all
        /// of the files in the job have been successfully transferred. For
        /// BG_JOB_TYPE_UPLOAD_REPLY jobs, BITS calls the JobTransferred method
        /// after the upload file has been transferred to the server and the
        /// reply has been transferred to the client.
        /// </summary>
        /// <param name="pJob">
        /// Contains job-related information, such as the time the job
        /// completed, the number of bytes transferred, and the number of files
        /// transferred. Do not release pJob; BITS releases the interface when
        /// the method returns.
        /// </param>
        /// <remarks>
        /// Typically, your implementation should call the
        /// IBackgroundCopyJob::Complete method to acknowledge that BITS
        /// successfully transferred the files. Download files and the reply
        /// file are not available on the client until you call the Complete
        /// method.
        /// 
        /// If you do not call the Complete method or the
        /// IBackgroundCopyJob::Cancel method within 90 days (default
        /// JobInactivityTimeout Group Policy), BITS cancels the job and deletes
        /// the downloaded files and reply file; job cancellation does not
        /// affect files that have been successfully uploaded.
        /// 
        /// If you want to retrieve the reply data in your callback, query pJob
        /// for the IBackgroundCopyJob2 interface and call its GetReplyData
        /// method. To retrieve the name of the file that contains the reply
        /// data, call the GetReplyFileName method.
        /// 
        /// BITS does not guarantee the integrity of the transferred files
        /// against third-party intrusions. Clients can implement integrity
        /// checks to validate transferred files before calling the Complete
        /// method. To get notification when a file is transferred, implement
        /// the IBackgroundCopyCallback2::FileTransferred method. Inside the
        /// callback, call the IBackgroundCopyFile3::GetTemporaryName method to
        /// get the name of the temporary file that contains the downloaded
        /// content. Validate the contents and then call the
        /// IBackgroundCopyFile3::SetValidationState method to indicate if the
        /// content is valid. If the content is not valid and BITS downloaded
        /// the file from the origin server, the job goes in the error state. If
        /// the job was downloaded from a peer, BITS downloads the file from the
        /// origin server.
        /// 
        /// Note:
        /// BITS supports up to four simultaneous notifications per user. 
        /// If one or more applications block all four notifications for a user 
        /// from returning, an application running as the same user will not 
        /// receive notifications until one or more of the blocking notifications 
        /// return. To reduce the chance that your callback blocks other 
        /// notifications, keep your implementation short.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void JobTransferred( [In] [MarshalAs( UnmanagedType.Interface )] IBackgroundCopyJob pJob );

        /// <summary>
        /// BITS calls your implementation of the JobError method when the state
        /// of the job changes to BG_JOB_STATE_ERROR.
        /// </summary>
        /// <param name="pJob">
        /// Contains job-related information, such as the number of bytes and
        /// files transferred before the error occurred. It also contains the
        /// methods to resume and cancel the job. Do not release pJob; BITS
        /// releases the interface when the JobError method returns.
        /// </param>
        /// <param name="pError">
        /// Contains error information, such as the file being processed at the
        /// time the fatal error occurred and a description of the error. Do not
        /// release pError; BITS releases the interface when the JobError method
        /// returns.
        /// </param>
        /// <remarks>
        /// After you determine the cause of the error, perform one of the
        /// following options:
        /// 
        /// To cancel the job, call the IBackgroundCopyJob::Cancel method. The
        /// cancel request has no effect on upload jobs if the error occurred
        /// after the file was successfully uploaded. However, if the job type
        /// is BG_JOB_TYPE_UPLOAD_REPLY and the upload was successful, calling
        /// the Cancel method cancels the request for the reply data. To accept
        /// the portion of the job that transferred successfully before the
        /// error occurred, call the IBackgroundCopyJob::Complete method. This
        /// option does not apply to upload jobs; you cannot complete a portion
        /// of an upload job. To finish processing the job, fix the problem, and
        /// then call the IBackgroundCopyJob::Resume method.
        /// 
        /// If the job remains in an error state for 90 days (default
        /// JobInactivityTimeout Group Policy), BITS cancels the job and deletes
        /// related temporary files; job cancellation does not affect files that
        /// have been successfully uploaded.
        /// 
        /// Transient errors do not generate calls to the JobError method.
        /// 
        /// To determine whether the upload, reply, or server application
        /// portion of an upload reply job failed, call the
        /// IBackgroundCopyError::GetError method to retrieve the context in
        /// which the error occurred. The server application failed if the
        /// context is BG_ERROR_CONTEXT_REMOTE_APPLICATION. The context for
        /// upload and reply is BG_ERROR_CONTEXT_REMOTE_FILE. The reply failed
        /// if the BytesTotal member of the BG_JOB_REPLY_PROGRESS structure is
        /// not BG_SIZE_UNKNOWN. Otherwise, the upload failed.
        /// 
        /// Note:
        /// BITS supports up to four simultaneous notifications per user. If one
        /// or more applications block all four notifications for a user from 
        /// returning, an application running as the same user will not receive 
        /// notifications until one or more of the blocking notifications 
        /// return. To reduce the chance that your callback blocks other 
        /// notifications, keep your implementation short.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void JobError( [In] [MarshalAs( UnmanagedType.Interface )] IBackgroundCopyJob pJob,
                       [In] [MarshalAs( UnmanagedType.Interface )] IBackgroundCopyError pError );

        /// <summary>
        /// BITS calls your implementation of the JobModification method when
        /// the job has been modified. The service generates this event when
        /// bytes are transferred, files have been added to the job, properties
        /// have been modified, or the state of the job has changed.
        /// </summary>
        /// <param name="pJob">
        /// Contains the methods for accessing property, progress, and state
        /// information of the job. Do not release pJob; BITS releases the
        /// interface when the JobModification method returns.
        /// </param>
        /// <param name="dwReserved">
        /// Reserved for future use.
        /// </param>
        /// <remarks>
        /// Your implementation may not receive all modification events under
        /// maximum resource load conditions.
        /// 
        /// BITS generates a high volume of modification events; consider
        /// creating a timer and polling for state and progress information or
        /// limiting your use of this callback. If you use this callback, keep
        /// your implementation short.
        /// 
        /// BITS does not generate a modify event when the state of the job
        /// changes to BG_JOB_STATE_ERROR or BG_JOB_STATE_TRANSFERRED.
        /// 
        /// Note:
        /// BITS supports up to four simultaneous notifications per user. If 
        /// one or more applications block all four notifications for a user 
        /// from returning, an application running as the same user will not
        /// receive notifications until one or more of the blocking 
        /// notifications return.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "dw" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void JobModification( [In] [MarshalAs( UnmanagedType.Interface )] IBackgroundCopyJob pJob, [In] uint dwReserved );
    }
}