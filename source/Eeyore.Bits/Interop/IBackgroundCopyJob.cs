#region Using Directives

using System;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// Use the IBackgroundCopyJob interface to add files to the job, set the
    /// priority level of the job, determine the state of the job, and to start
    /// and stop the job.
    /// 
    /// To create a job, call the IBackgroundCopyManager::CreateJob method. To
    /// get an IBackgroundCopyJob interface pointer to an existing job, call the
    /// IBackgroundCopyManager::GetJob method.
    /// </summary>
    [ComImport]
    [Guid( "37668D37-507E-4160-9316-26306D150B12" )]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    internal interface IBackgroundCopyJob
    {
        /// <summary>
        /// Adds multiple files to a job.
        /// </summary>
        /// <param name="cFileCount">
        /// Number of elements in paFileSet.
        /// </param>
        /// <param name="paFileSet">
        /// Array of BG_FILE_INFO structures that identify the local and remote
        /// file names of the files to transfer. 
        /// 
        /// Upload jobs are restricted to a single file. If the array contains
        /// more than one element, or the job already contains a file, the
        /// method returns BG_E_TOO_MANY_FILES.
        /// </param>
        /// <remarks>
        /// It is more efficient to call the AddFileSet method when adding
        /// multiple files to a job than to call the IBackgroundCopyJob::AddFile
        /// method in a loop. To add a single file to a job, call the AddFile
        /// method. For more information, see Adding Files to a Job.
        /// 
        /// To add a file to a job from which BITS downloads ranges of data from
        /// the file, call the IBackgroundCopyJob3::AddFileWithRanges method.
        /// 
        /// Upload jobs can contain only one file. If you add more than one
        /// file, the method returns BG_E_TOO_MANY_FILES.
        /// 
        /// For downloads, BITS guarantees that the version of a file (based on
        /// file size and date, not content) that it transfers will be
        /// consistent; however, it does not guarantee that a set of files will
        /// be consistent. For example, if BITS is in the middle of downloading
        /// the second of two files at the time that the files are updated on
        /// the server, BITS restarts the download of the second file; however,
        /// the first file is not downloaded again.
        /// 
        /// Note that if you own the file being downloaded from the server, you
        /// should create a new URL for each new version of the file. If you use
        /// the same URL for new versions of the file, some proxy servers may
        /// serve stale data from their cache because they do not verify with
        /// the original server if the file is stale. 
        /// 
        /// For uploads, BITS generates an error if the local file changes while
        /// the file is transferring. The error code is BG_E_FILE_CHANGED and
        /// the context is BG_ERROR_CONTEXT_LOCAL_FILE.
        /// 
        /// BITS transfers the files within a job sequentially. If an error
        /// occurs while transferring a file, the job moves to an error state
        /// and no more files within the job are processed until the error is
        /// resolved.
        /// 
        /// By default, a user can add up to 200 files to a job. This limit does
        /// not apply to administrators or service accounts. To change the
        /// default, set the MaxFilesPerJob group policies.
        /// Prior to Windows Vista:  There is no limit on the number of files that a user can add to a job.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "c" )]
        [SuppressMessage( "Microsoft.Design", "CA1045:DoNotPassTypesByReference", MessageId = "1#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void AddFileSet( [In] uint cFileCount, [In] ref _BG_FILE_INFO paFileSet );

        /// <summary>
        /// Adds a single file to the job.
        /// </summary>
        /// <param name="pRemoteName">
        /// Null-terminated string that contains the name of the file on the
        /// server. For information on specifying the remote name, see the
        /// RemoteName member and Remarks section of the BG_FILE_INFO structure.
        /// </param>
        /// <param name="pLocalName">
        /// Null-terminated string that contains the name of the file on the
        /// client. For information on specifying the local name, see the
        /// LocalName member and Remarks section of the BG_FILE_INFO structure.
        /// </param>
        /// <remarks>
        /// To add more than one file at a time to a job, call the
        /// IBackgroundCopyJob::AddFileSet method. It is more efficient to call
        /// the AddFileSet method when adding multiple files to a job than to
        /// call the AddFile method in a loop. For more information, see Adding
        /// Files to a Job.
        /// 
        /// To add a file to a job from which BITS downloads ranges of data from
        /// the file, call the IBackgroundCopyJob3::AddFileWithRanges method.
        /// 
        /// Upload jobs can only contain one file. If you add a second file, the
        /// method returns BG_E_TOO_MANY_FILES.
        /// 
        /// For downloads, BITS guarantees that the version of a file (based on
        /// file size and date, not content) that it transfers will be
        /// consistent; however, it does not guarantee that a set of files will
        /// be consistent. For example, if BITS is in the middle of downloading
        /// the second of two files in the job at the time that the files are
        /// updated on the server, BITS restarts the download of the second
        /// file; however, the first file is not downloaded again.
        /// 
        /// Note that if you own the file being downloaded from the server, you
        /// should create a new URL for each new version of the file. If you use
        /// the same URL for new versions of the file, some proxy servers may
        /// serve stale data from their cache because they do not verify with
        /// the original server if the file is stale. 
        /// 
        /// For uploads, BITS generates an error if the local file changes while
        /// the file is transferring. The error code is BG_E_FILE_CHANGED and
        /// the context is BG_ERROR_CONTEXT_LOCAL_FILE.
        /// 
        /// BITS transfers the files within a job sequentially. If an error
        /// occurs while transferring a file, the job moves to an error state
        /// and no more files within the job are processed until the error is
        /// resolved.
        /// 
        /// By default, a user can add up to 200 files to a job. This limit does
        /// not apply to administrators or service accounts. To change the
        /// default, set the MaxFilesPerJob group policies.
        /// Prior to Windows Vista:  There is no limit on the number of files that a user can add to a job.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void AddFile( [In] [MarshalAs( UnmanagedType.LPWStr )] string pRemoteName,
                      [In] [MarshalAs( UnmanagedType.LPWStr )] string pLocalName );

        /// <summary>
        /// Retrieves an IEnumBackgroundCopyFiles interface pointer that you use
        /// to enumerate the files in a job.
        /// </summary>
        /// <param name="ppEnumFiles">
        /// IEnumBackgroundCopyFiles interface pointer that you use to enumerate
        /// the files in the job. Release ppEnumFiles when done.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void EnumFiles( [MarshalAs( UnmanagedType.Interface )] out IEnumBackgroundCopyFiles ppEnumFiles );

        /// <summary>
        /// Suspends a job. New jobs, jobs that are in error, and jobs that have
        /// finished transferring files are automatically suspended.
        /// </summary>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Suspend();

        /// <summary>
        /// Activates a new job or restarts a job that has been suspended.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1716:IdentifiersShouldNotMatchKeywords", MessageId = "Resume" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Resume();

        /// <summary>
        /// Deletes the job from the transfer queue and removes related
        /// temporary files from the client (downloads) and server (uploads).
        /// </summary>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Cancel();

        /// <summary>
        /// Ends the job and saves the transferred files on the client.
        /// </summary>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Complete();

        /// <summary>
        /// Retrieves the identifier used to identify the job in the queue.
        /// </summary>
        /// <param name="pJobID">
        /// GUID that identifies the job within the BITS queue.
        /// </param>
        /// <remarks>
        /// The service generates the identifier when you create the job. To use
        /// the identifier to retrieve an IBackgroundCopyJob interface pointer
        /// for the job, call the IBackgroundCopyManager::GetJob method.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ID" )]
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetId(out Guid pJobID);

        /// <summary>
        /// Retrieves the type of transfer being performed, such as a file
        /// download or upload.
        /// </summary>
        /// <param name="pJobType">
        /// Type of transfer being performed. For a list of transfer types, see
        /// the BG_JOB_TYPE enumeration.
        /// </param>
        /// <remarks>
        /// Specify the type of transfer when you create the job.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Naming", "CA1716:IdentifiersShouldNotMatchKeywords", MessageId = "GetType" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetType( out BG_JOB_TYPE pJobType );

        /// <summary>
        /// Retrieves job-related progress information, such as the number of
        /// bytes and files transferred.
        /// </summary>
        /// <param name="pProgress">
        /// Contains data that you can use to calculate the percentage of the
        /// job that is complete. For more information, see BG_JOB_PROGRESS.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetProgress( out _BG_JOB_PROGRESS pProgress );

        /// <summary>
        /// Retrieves job-related time stamps, such as the time that the job was
        /// created or last modified.
        /// </summary>
        /// <param name="pTimes">
        /// Contains job-related time stamps. For available time stamps, see the
        /// BG_JOB_TIMES structure.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetTimes( out _BG_JOB_TIMES pTimes );

        /// <summary>
        /// Retrieves the state of the job.
        /// </summary>
        /// <param name="pJobState">
        /// The state of the job. For example, the state reflects whether the
        /// job is in error, transferring data, or suspended. For a list of job
        /// states, see the BG_JOB_STATE enumeration.
        /// </param>
        /// <remarks>
        /// If you want to know when a job is in error or has transferred all
        /// the files in the job, you can use this method to poll for the state
        /// of the job or you can register to receive notification when events
        /// occur. For details on registering to receive event notification, see
        /// the IBackgroundCopyCallback interface.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetState( out BG_JOB_STATE pJobState );

        /// <summary>
        /// Retrieves the error interface after an error occurs. BITS generates
        /// an error object when the state of the job is BG_JOB_STATE_ERROR or
        /// BG_JOB_STATE_TRANSIENT_ERROR. The service does not create an error
        /// object when a call to an IBackgroundCopyXXXX interface method fails.
        /// The error object is available until BITS begins transferring data
        /// (the state of the job changes to BG_JOB_STATE_TRANSFERRING) for the
        /// job or until your application exits.
        /// </summary>
        /// <param name="ppError">
        /// Error interface that provides the error code, a description of the
        /// error, and the context in which the error occurred. This parameter
        /// also identifies the file being transferred at the time the error
        /// occurred. Release ppError when done.
        /// </param>
        /// <remarks>
        /// The job is placed in an error state on fatal errors or after the
        /// no-progress-timeout period expires for transient errors (this period
        /// is retrieved from the GetNoProgressTimeout method). Use one of the
        /// following options to determine if the job is in error:
        /// 
        /// To poll for the state of the job, call the
        /// IBackgroundCopyJob::GetState method. The job is in error if the
        /// state is BG_JOB_STATE_ERROR. To receive notification when an error
        /// occurs, implement the IBackgroundCopyCallback interface
        /// (specifically, the JobError method). Then, call the
        /// IBackgroundCopyJob::SetNotifyInterface method to register the
        /// callback and the IBackgroundCopyJob::SetNotifyFlags method to set
        /// the BG_NOTIFY_JOB_ERROR flag.
        /// 
        /// The IBackgroundCopyError interface contains information that you use
        /// to determine the cause of the error and if the transfer process can
        /// proceed. After you determine the cause of the error, perform one of
        /// the following options:
        /// 
        /// To cancel the job, call the IBackgroundCopyJob::Cancel method. To
        /// save those files that transferred successfully before the error
        /// occurred, call the IBackgroundCopyJob::Complete method. To finish
        /// processing the job, fix the problem, and then call the
        /// IBackgroundCopyJob::Resume method.
        /// 
        /// If the job remains in an error state for 90 days (default
        /// JobInactivityTimeout Group Policy), the service removes the job from
        /// the queue and deletes the temporary files on the client; job
        /// deletion does not affect files that have been successfully uploaded.
        /// 
        /// To determine whether the upload, reply, or server application
        /// portion of an upload-reply job failed, call the
        /// IBackgroundCopyError::GetError method to retrieve the context in
        /// which the error occurred. The server application failed if the
        /// context is BG_ERROR_CONTEXT_REMOTE_APPLICATION. If the error is with
        /// the upload or reply, the context is BG_ERROR_CONTEXT_REMOTE_FILE.
        /// The upload failed if the BytesTotal member of the
        /// BG_JOB_REPLY_PROGRESS structure is BG_SIZE_UNKNOWN. Otherwise, the
        /// reply failed.
        /// </remarks>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetError( [MarshalAs( UnmanagedType.Interface )] out IBackgroundCopyError ppError );

        /// <summary>
        /// Retrieves the identity of the job's owner.
        /// </summary>
        /// <param name="ppOwner">
        /// Null-terminated string that contains the string version of the SID
        /// that identifies the job's owner. Call the CoTaskMemFree function to
        /// free ppOwner when done.
        /// </param>
        /// <remarks>
        /// To convert the string format of the SID into a domain\user-name
        /// format, which is suitable for display in a user interface, call the
        /// following functions:
        /// 
        /// To convert the string SID to a SID, call the ConvertStringSidToSid
        /// function. To retrieve the domain and user name associated with the
        /// SID, call the LookupAccountSid function.
        /// </remarks>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetOwner( [MarshalAs( UnmanagedType.LPWStr )] out string ppOwner );

        /// <summary>
        /// Specifies a display name for the job. Typically, you use the display
        /// name to identify the job in a user interface.
        /// </summary>
        /// <param name="pDisplayName">
        /// Null-terminated string that identifies the job. Must not be NULL.
        /// The length of the string is limited to 256 characters, not including
        /// the null terminator.
        /// </param>
        /// <remarks>
        /// The display name is originally set when you create the job. For
        /// details on specifying the display name when you create the job, see
        /// the IBackgroundCopyManager::CreateJob method.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetDisplayName( [In] [MarshalAs( UnmanagedType.LPWStr )] string pDisplayName );

        /// <summary>
        /// Retrieves the display name for the job. Typically, you use the
        /// display name to identify the job in a user interface.
        /// </summary>
        /// <param name="ppDisplayName">
        /// Null-terminated string that contains the display name that
        /// identifies the job. More than one job can have the same display
        /// name. Call the CoTaskMemFree function to free ppDisplayName when
        /// done.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetDisplayName( [MarshalAs( UnmanagedType.LPWStr )] out string ppDisplayName );

        /// <summary>
        /// Provides a description of the job.
        /// </summary>
        /// <param name="pDescription">
        /// Null-terminated string that provides additional information about
        /// the job. The length of the string is limited to 1,024 characters,
        /// not including the null terminator.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetDescription( [In] [MarshalAs( UnmanagedType.LPWStr )] string pDescription );

        /// <summary>
        /// Retrieves the description of the job.
        /// </summary>
        /// <param name="ppDescription">
        /// Null-terminated string that contains a short description of the job.
        /// Call the CoTaskMemFree function to free ppDescription when done.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetDescription( [MarshalAs( UnmanagedType.LPWStr )] out string ppDescription );

        /// <summary>
        /// Specifies the priority level of your job. The priority level
        /// determines when your job is processed relative to other jobs in the
        /// transfer queue.
        /// </summary>
        /// <param name="Priority">
        /// Specifies the priority level of your job relative to other jobs in
        /// the transfer queue. The default is BG_JOB_PRIORITY_NORMAL. For a
        /// list of priority levels, see the BG_JOB_PRIORITY enumeration.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Priority" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetPriority( [In] BG_JOB_PRIORITY Priority );

        /// <summary>
        /// Retrieves the priority level for the job. The priority level
        /// determines when the job is processed relative to other jobs in the
        /// transfer queue.
        /// </summary>
        /// <param name="pPriority">
        /// Priority of the job relative to other jobs in the transfer queue.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetPriority(out BG_JOB_PRIORITY pPriority );

        /// <summary>
        /// Specifies the type of event notification you want to receive, such
        /// as job transferred events.
        /// </summary>
        /// <param name="NotifyFlags">
        /// Set one or more of the following flags to identify the events that
        /// you want to receive.
        /// </param>
        /// <remarks>
        /// Use the SetNotifyFlags method in conjunction with the
        /// IBackgroundCopyJob::SetNotifyInterface and
        /// IBackgroundCopyJob2::SetNotifyCmdLine methods to receive event
        /// notification.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId = "Flags" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Notify" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetNotifyFlags( [In] BG_NOTIFY_FLAGS NotifyFlags );

        /// <summary>
        /// Retrieves the event notification flags for the job.
        /// </summary>
        /// <param name="pNotifyFlags">
        /// Identifies the events that your application receives. The following
        /// table lists the event notification flag values.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId = "Flags" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetNotifyFlags( out BG_NOTIFY_FLAGS pNotifyFlags );

        /// <summary>
        /// Identifies your implementation of the IBackgroundCopyCallback
        /// interface to BITS. Use the IBackgroundCopyCallback interface to
        /// receive notification of job-related events.
        /// </summary>
        /// <param name="pNotifyInterface">
        /// An IBackgroundCopyCallback interface pointer. To remove the current
        /// callback interface pointer, set this parameter to NULL.
        /// </param>
        /// <remarks>
        /// Call this method only if you implement the IBackgroundCopyCallback
        /// interface. Use the SetNotifyInterface method in conjunction with the
        /// SetNotifyFlags method to specify the type of notification that you
        /// want to receive. 
        /// 
        /// The notification interface becomes invalid when your application
        /// terminates; BITS does not persist the notify interface. As a result,
        /// your application's initialization process should call the
        /// SetNotifyInterface method on those existing jobs for which you want
        /// to receive notification. If you need to capture state and progress
        /// information that occurred since the last time your application was
        /// run, poll for state and progress information during application
        /// initialization.
        /// 
        /// Note that BITS will call your callback even if the event for which
        /// you registered already occurred.
        /// 
        /// As an alternative to receiving callback notification, you can
        /// register to have BITS execute a command line for error and
        /// transferred events. For more details, see the
        /// IBackgroundCopyJob2::SetNotifyCmdLine method.
        /// 
        /// Note that if more than one application calls the SetNotifyInterface
        /// method to set the notification interface for the job, the last
        /// application to call the SetNotifyInterface method is the one that
        /// will receive notifications—the other applications will not receive
        /// notifications.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetNotifyInterface( [In] [MarshalAs( UnmanagedType.IUnknown )] object pNotifyInterface );

        /// <summary>
        /// Retrieves the interface pointer to your implementation of the
        /// IBackgroundCopyCallback interface.
        /// </summary>
        /// <param name="ppNotifyInterface">
        /// Interface pointer to your implementation of the
        /// IBackgroundCopyCallback interface. When done, release
        /// ppNotifyInterface.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1007:UseGenericsWhereAppropriate" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetNotifyInterface( [MarshalAs( UnmanagedType.IUnknown )] out object ppNotifyInterface );

        /// <summary>
        /// Sets the minimum length of time that BITS waits after encountering a
        /// transient error condition before trying to transfer the file.
        /// </summary>
        /// <param name="RetryDelay">
        /// Minimum length of time, in seconds, that BITS waits after
        /// encountering a transient error before trying to transfer the file.
        /// The default retry delay is 600 seconds (10 minutes). The minimum
        /// retry delay that you can specify is 60 seconds. If you specify a
        /// value less than 60 seconds, BITS changes the value to 60 seconds. If
        /// the value exceeds the no-progress-timeout value retrieved from the
        /// GetNoProgressTimeout method, BITS will not retry the transfer and
        /// moves the job to the BG_JOB_STATE_ERROR state.
        /// </param>
        /// <remarks>
        /// To start the job before the minimum retry period expires, call the
        /// IBackgroundCopyJob::Resume method.
        /// 
        /// BITS does not retry the job if a network disconnect or disk lock
        /// error occurred (for example, chkdsk is running) or the
        /// MaxInternetBandwidth Group Policy is zero. 
        /// Note  Changing the system clock does not affect the minimum retry delay. For example, if the current time is 2:00 P.M. and BITS is to retry the job at 2:10 P.M., moving the system clock forward ten or more minutes does not mean BITS will retry the job early—BITS will still retry the job in ten minutes. To reflect the system clock change in BITS, you must restart the computer or the BITS service.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Retry" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetMinimumRetryDelay( [In] uint RetryDelay );

        /// <summary>
        /// Retrieves the minimum length of time that the service waits after
        /// encountering a transient error condition before trying to transfer
        /// the file.
        /// </summary>
        /// <param name="pRetryDelay">
        /// Length of time, in seconds, that the service waits after
        /// encountering a transient error before trying to transfer the file.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetMinimumRetryDelay( out uint pRetryDelay );

        /// <summary>
        /// Sets the length of time that BITS tries to transfer the file after a
        /// transient error condition occurs. If there is progress, the timer is
        /// reset.
        /// </summary>
        /// <param name="RetryPeriod">
        /// Length of time, in seconds, that BITS tries to transfer the file
        /// after the first transient error occurs. The default retry period is
        /// 1,209,600 seconds (14 days). Set the retry period to 0 to prevent
        /// retries and to force the job into the BG_JOB_STATE_ERROR state for
        /// all errors. If the retry period value exceeds the
        /// JobInactivityTimeout Group Policy value (90-day default), BITS
        /// cancels the job after the policy value is exceeded.
        /// </param>
        /// <remarks>
        /// If BITS does not make progress during the retry period, it moves the
        /// state of the job from BG_JOB_STATE_TRANSIENT_ERROR to
        /// BG_JOB_STATE_ERROR. If you request error notification, BITS then
        /// calls your JobError callback.
        /// Note  Changing the system clock does not affect the retry period. For example, if the retry period expires in 14 days, moving the system clock forward 14 or more days does not mean the retry period expires early—the retry period will still expire in 14 days. To reflect the system clock change in BITS, you must restart the computer or the BITS service.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Retry" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetNoProgressTimeout( [In] uint RetryPeriod );

        /// <summary>
        /// Retrieves the length of time that the service tries to transfer the
        /// file after a transient error condition occurs. If there is progress,
        /// the timer is reset.
        /// </summary>
        /// <param name="pRetryPeriod">
        /// Length of time, in seconds, that the service tries to transfer the
        /// file after a transient error occurs.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetNoProgressTimeout( out uint pRetryPeriod );

        /// <summary>
        /// Retrieves the number of times BITS tried to transfer the job and an
        /// error occurred.
        /// </summary>
        /// <param name="pErrors">
        /// Number of errors that occurred while BITS tried to transfer the job.
        /// The count increases when the job moves from the
        /// BG_JOB_STATE_TRANSFERRING state to the BG_JOB_STATE_TRANSIENT_ERROR
        /// or BG_JOB_STATE_ERROR state.
        /// </param>
        /// <remarks>
        /// The count is never reset. The count may not accurately reflect the
        /// number of times the job moves to the transient error or error state.
        /// For example, BITS does not increase the count when network
        /// disconnects occur, the check disk program runs, or the bandwidth
        /// policy prevents jobs from transferring. 
        /// 
        /// BITS also increases the count each time it tries to transfer the job
        /// when the job is in the transient error state and the job fails. BITS
        /// 1.5 and earlier:   BITS does not increase the count each time it
        /// tries to transfer the job when it is in the transient error state.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetErrorCount( out uint pErrors );

        /// <summary>
        /// Specifies which proxy to use to transfer files.
        /// </summary>
        /// <param name="ProxyUsage">
        /// Specifies whether to use the user's proxy settings, not to use a
        /// proxy, or to use application-specified proxy settings. The default
        /// is to use the user's proxy settings, BG_JOB_PROXY_USAGE_PRECONFIG.
        /// For a list of proxy options, see the BG_JOB_PROXY_USAGE enumeration.
        /// </param>
        /// <param name="pProxyList">
        /// Null-terminated string that contains the proxies to use to transfer
        /// files. The list is space-delimited. For details on specifying a
        /// proxy, see Remarks.
        /// 
        /// This parameter must be NULL if the value of ProxyUsage is
        /// BG_JOB_PROXY_USAGE_PRECONFIG, BG_JOB_PROXY_USAGE_NO_PROXY, or
        /// BG_JOB_PROXY_USAGE_NO_AUTODETECT.
        /// 
        /// The length of the proxy list is limited to 4,000 characters, not
        /// including the null terminator.
        /// </param>
        /// <param name="pProxyBypassList">
        /// Null-terminated string that contains an optional list of host names,
        /// IP addresses, or both, that can bypass the proxy. The list is
        /// space-delimited. For details on specifying a bypass proxy, see
        /// Remarks.
        /// 
        /// This parameter must be NULL if the value of ProxyUsage is
        /// BG_JOB_PROXY_USAGE_PRECONFIG, BG_JOB_PROXY_USAGE_NO_PROXY, or
        /// BG_JOB_PROXY_USAGE_NO_AUTODETECT. 
        /// 
        /// The length of the proxy bypass list is limited to 4,000 characters,
        /// not including the null terminator.
        /// </param>
        /// <remarks>
        /// The proxy information you provide is validated at run time. If the
        /// proxy information is invalid, the job enters the BG_JOB_STATE_ERROR
        /// state with a BG_E_INVALID_PROXY_INFO error code.
        /// 
        /// If your service runs as LocalSystem, you should use the
        /// SetProxySettings method to explicitly specify a proxy or proxy
        /// bypass list for the account and set ProxyUsage to
        /// BG_JOB_PROXY_USAGE_OVERRIDE. For more information on using system
        /// accounts with BITS, see Service Accounts and BITS.
        /// 
        /// BITS does not recognize the proxy settings that are set using the
        /// Proxycfg.exe file.
        /// 
        /// Specify a proxy as:
        /// 
        /// "[[protocol]=][[protocol]"://"][server][":"[port]]"
        /// 
        /// The valid protocols are HTTP and HTTPS. The proxy list can contain
        /// the port number that is used to access the proxy. For example, to
        /// list an HTTP proxy, a valid string is
        /// http=http://http_proxy_name:80, where http_proxy_name is the name of
        /// the proxy server and 80 is the port number that you must use to
        /// access the proxy. If the proxy uses the default port number for that
        /// protocol, then you can omit the port number. If a proxy name is
        /// listed by itself, you can use it as the default proxy for any
        /// protocols that do not have a specified proxy. For example,
        /// http=http://http_proxy other_proxy uses http_proxy for any HTTP
        /// operations, while the HTTPS protocol uses the proxy named
        /// other_proxy. 
        /// 
        /// You can list locally known host names or Internet Protocol (IP)
        /// addresses in the proxy bypass list. This name can contain wildcards,
        /// such as "*", that cause the application to bypass the proxy server
        /// for addresses that fit the specified pattern, for example,
        /// "*.microsoft.com" or "*.org". Wildcard characters must be the
        /// left-most characters in the name. For example, "aaa.*" is not
        /// supported. You can specify the [local] macro to indicate that all
        /// local intranet sites are bypassed. Local intranet sites are
        /// considered to be all servers that do not contain a period in their
        /// name. 
        /// 
        /// BITS uses the Internet Explorer proxy settings of the user if an
        /// application does not specify a proxy usage. This default behavior
        /// typically works if the application submits the job in the context of
        /// an interactive user but may not work if a service running as
        /// LocalSystem submits the job. You can specify Internet Explorer proxy
        /// settings for LocalSystem; however, it is difficult to detect these
        /// settings when problems occur.
        /// Windows 2000:  You cannot specify Internet Explorer proxy settings for LocalSystem.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Proxy" )]
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetProxySettings(
            [In] BG_JOB_PROXY_USAGE ProxyUsage,
            [In] [MarshalAs( UnmanagedType.LPWStr )] string pProxyList,
            [In] [MarshalAs( UnmanagedType.LPWStr )] string pProxyBypassList );

        /// <summary>
        /// Retrieves the proxy information that the job uses to transfer the
        /// files.
        /// </summary>
        /// <param name="pProxyUsage">
        /// Specifies the proxy settings the job uses to transfer the files. For
        /// a list of proxy options, see the BG_JOB_PROXY_USAGE enumeration.
        /// </param>
        /// <param name="ppProxyList">
        /// Null-terminated string that contains one or more proxies to use to
        /// transfer files. The list is space-delimited. For details on the
        /// format of the string, see the Listing Proxy Servers section of
        /// Enabling Internet Functionality. Call the CoTaskMemFree function to
        /// free ppProxyList when done.
        /// </param>
        /// <param name="ppProxyBypassList">
        /// Null-terminated string that contains an optional list of host names
        /// or IP addresses, or both, that were not routed through the proxy.
        /// The list is space-delimited. For details on the format of the
        /// string, see the Listing the Proxy Bypass section of Enabling
        /// Internet Functionality. Call the CoTaskMemFree function to free
        /// ppProxyBypassList when done.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "2#" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "1#" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetProxySettings(
            out BG_JOB_PROXY_USAGE pProxyUsage,
            [MarshalAs( UnmanagedType.LPWStr )] out string ppProxyList,
            [MarshalAs( UnmanagedType.LPWStr )] out string ppProxyBypassList );


        /// <summary>
        /// Changes ownership of the job to the current user.
        /// </summary>
        /// <remarks>
        /// To take ownership of the job, the user must have administrator
        /// privileges on the client. On Windows Vista, the user must run in an
        /// elevated state. After taking ownership, any future updates to the
        /// job must be done while the user is running in an elevated state. For
        /// details, see Users and Network Connections.
        /// 
        /// An administrator does not have to take ownership of another user's
        /// job to change its properties or to add files to the job. Typically,
        /// an administrator uses the TakeOwnership method if the user does not
        /// have sufficient permission to complete the job or if the user is not
        /// logged on and the administrator needs the job to complete.
        /// 
        /// After ownership of the job has changed, the job is processed only
        /// when the new owner is logged on to the client. Call the
        /// IBackgroundCopyJob::GetOwner method to retrieve the SID of the new
        /// owner.
        /// 
        /// If the administrator cancels the job after taking ownership, it is
        /// possible that the files may be orphaned because the administrator
        /// does not have write permission to the files. This can occur if the
        /// local file destination is in the previous user's roaming profile.
        /// 
        /// The TakeOwnership method removes credentials, certificates, custom
        /// headers, and command line notification from the job, if set.
        /// 
        /// If the job specifies event notification, the callback is executed in
        /// the context of the user who called the
        /// IBackgroundCopyJob::SetNotifyInterface method.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void TakeOwnership();
    }
}