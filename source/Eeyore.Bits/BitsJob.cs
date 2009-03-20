#region Using Directives

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using Eeyore.Bits.Net.Adapters;
using Eeyore.Bits.Net.Interop;
using Eeyore.Commons.ObjectModel;

#endregion

namespace Eeyore.Bits.Net
{
    /// <summary>
    /// A managed wrapper around the IBackgroundCopyJob providing a useful and
    /// recognizable interface for .NET programmers.
    /// </summary>
    [SuppressMessage( "Microsoft.Naming", "CA1710:IdentifiersShouldHaveCorrectSuffix" )]
    public class BitsJob : Disposable, IEnumerable<BitsFile>, IBitsListener
    {
        private const int DEFAULT_RETRY_DELAY = 600; // 10 minutes
        private const int DEFAULT_RETRY_PERIOD = 1209600; // 14 days
        private const int MAX_JOB_DISPLAY_NAME_LENGTH = 1024;
        private const int MIN_RETRY_DELAY = 60; // seconds

        private BitsJobAdapter _bitsJobAdapter;
        private BitsCallbackAdapter _callbackAdapter;

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsJob"/> class. This
        /// .ctor is only used internally to create the wrapper for preexisting
        /// BITS jobs.
        /// </summary>
        /// <param name="bitsJobAdapter">The bits job adapter.</param>
        internal BitsJob( BitsJobAdapter bitsJobAdapter )
        {
            _bitsJobAdapter = bitsJobAdapter;
            ConfigureCallbacks();
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsJob"/> class and
        /// creates the underlying IBackgroundCopyJob in the BITS system.
        /// </summary>
        /// <param name="displayName">
        /// The display name for the job. Typically, the display name is used to
        /// identify the job in a user interface. More than one job may have the
        /// same display name.
        /// </param>
        /// <exception cref="ArgumentNullException">if <c>displayName</c> is null or empty.</exception>
        public BitsJob( string displayName )
            : this( displayName, displayName )
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsJob"/> class and
        /// creates the underlying IBackgroundCopyJob in the BITS system.
        /// </summary>
        /// <param name="displayName">
        /// The display name for the job. Typically, the display name is used to
        /// identify the job in a user interface. More than one job may have the
        /// same display name.
        /// </param>
        /// <param name="description">
        /// String that provides additional information about the job. The
        /// length of the string is limited to MAX_JOB_DISPLAY_NAME_LENGTH
        /// characters.
        /// </param>
        /// <exception cref="ArgumentNullException">if <c>displayName</c> is null or empty.</exception>
        /// <exception cref="ArgumentNullException">if <c>description</c> is null or empty.</exception>
        /// <exception cref="ArgumentOutOfRangeException">if <c>description</c> length is > MAX_JOB_DISPLAY_NAME_LENGTH.</exception>
        public BitsJob( string displayName, string description )
            : this( displayName, description, DEFAULT_RETRY_PERIOD, DEFAULT_RETRY_DELAY )
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsJob"/> class and
        /// creates the underlying IBackgroundCopyJob in the BITS system.
        /// </summary>
        /// <param name="displayName">
        /// The display name for the job. Typically, the display name is used to
        /// identify the job in a user interface. More than one job may have the
        /// same display name.
        /// </param>
        /// <param name="description">
        /// String that provides additional information about the job. The
        /// length of the string is limited to MAX_JOB_DISPLAY_NAME_LENGTH
        /// characters.
        /// </param>
        /// <param name="retryPeriod">
        /// Length of time, in seconds, that BITS tries to transfer the file
        /// after the first transient error occurs. The default retry period is
        /// 1,209,600 seconds (14 days). Set the retry period to 0 to prevent
        /// retries and to force the job into the JobState.Error state for all
        /// errors. If the retry period value exceeds the JobInactivityTimeout
        /// Group Policy value (90-day default), BITS cancels the job after the
        /// policy value is exceeded.
        /// </param>
        /// <param name="retryDelay">
        /// Minimum length of time, in seconds, that BITS waits after
        /// encountering a transient error before trying to transfer the file.
        /// The default retry delay is 600 seconds (10 minutes). The minimum
        /// retry delay that you can specify is 60 seconds. If the value exceeds
        /// the no-progress-timeout value retrieved from the NoProgressTimeout
        /// property, BITS will not retry the transfer and moves the job to the
        /// JobState.Error state.
        /// </param>
        /// <exception cref="ArgumentNullException">if <c>displayName</c> is null or empty.</exception>
        /// <exception cref="ArgumentNullException">if <c>description</c> is null or empty.</exception>
        /// <exception cref="ArgumentOutOfRangeException">if <c>description</c> length is > MAX_JOB_DISPLAY_NAME_LENGTH.</exception>
        /// <exception cref="ArgumentOutOfRangeException">if <c>retryPeriod</c> less than 0.</exception>
        /// <exception cref="ArgumentOutOfRangeException">if <c>retryDelay</c> less than MIN_RETRY_DELAY.</exception>
        public BitsJob( string displayName, string description, long retryPeriod, long retryDelay )
        {
            displayName = displayName.Sanitize();
            description = description.Sanitize();

            if ( string.IsNullOrEmpty( displayName ) )
            {
                throw new ArgumentNullException( "displayName" );
            }

            if ( string.IsNullOrEmpty( description ) )
            {
                throw new ArgumentNullException( "description" );
            }

            if ( description.Length > MAX_JOB_DISPLAY_NAME_LENGTH )
            {
                throw new ArgumentOutOfRangeException( "description", description,
                                                       "BitsJob description must be no more than 1024 characters in length." );
            }

            if ( retryPeriod < 0 )
            {
                throw new ArgumentOutOfRangeException( "retryPeriod", retryPeriod,
                                                       "Retry period must be at least 0." );
            }

            if ( retryDelay < MIN_RETRY_DELAY )
            {
                throw new ArgumentOutOfRangeException( "retryDelay", retryDelay,
                                                       string.Format(
                                                           CultureInfo.CurrentCulture,
                                                           "The minimum retry delay that you can specify is {0} seconds.",
                                                           MIN_RETRY_DELAY ) );
            }

            _bitsJobAdapter = BitsManagerAdapter.CreateBitsJobAdapter( displayName,
                                                                       BG_JOB_TYPE.BG_JOB_TYPE_DOWNLOAD,
                                                                       description,
                                                                       retryPeriod,
                                                                       retryDelay );

            ConfigureCallbacks();
        }


        /// <summary>
        /// Gets the identifier used to identify the job in the queue.
        /// </summary>
        /// <value>The id.</value>
        public Guid Id
        {
            get { return _bitsJobAdapter.Id; }
        }

        /// <summary>
        /// Gets the the type of transfer being performed, such as a file
        /// download or upload.
        /// </summary>
        /// <value>The type of the job.</value>
        public JobType JobType
        {
            get { return _bitsJobAdapter.JobType; }
        }

        /// <summary>
        /// Gets the job-related progress information, such as the number of
        /// bytes and files transferred.
        /// </summary>
        /// <value>The job progress.</value>
        public JobProgress JobProgress
        {
            get { return _bitsJobAdapter.Progress; }
        }

        /// <summary>
        /// Gets the job creation time.
        /// </summary>
        /// <value>The creation time.</value>
        public DateTime CreationTime
        {
            get { return _bitsJobAdapter.CreationTime; }
        }

        /// <summary>
        /// Gets the job modification time.
        /// </summary>
        /// <value>The modification time.</value>
        public DateTime ModificationTime
        {
            get { return _bitsJobAdapter.ModificationTime; }
        }

        /// <summary>
        /// Gets the job transfer completion time.
        /// </summary>
        /// <value>The transfer completion time.</value>
        public DateTime TransferCompletionTime
        {
            get { return _bitsJobAdapter.TransferCompletionTime; }
        }

        /// <summary>
        /// Retrieves the identity of the job's owner.
        /// </summary>
        /// <value>The owner.</value>
        public string OwnerName
        {
            get { return _bitsJobAdapter.OwnerName; }
        }

        /// <summary>
        /// Gets the job owner's SID.
        /// </summary>
        /// <value>The owner's SID.</value>
        public string OwnerSid
        {
            get { return _bitsJobAdapter.OwnerSid; }
        }

        /// <summary>
        /// Gets the state of the job.
        /// </summary>
        /// <value>The state of the job.</value>
        public JobState JobState
        {
            get { return _bitsJobAdapter.State; }
        }

        /// <summary>
        /// Gets or sets the description.
        /// </summary>
        /// <value>The description.</value>
        public string Description
        {
            get { return _bitsJobAdapter.Description; }
            set { _bitsJobAdapter.Description = value; }
        }

        /// <summary>
        /// Gets or sets a display name for the job. Typically, you use the display
        /// name to identify the job in a user interface.
        /// </summary>
        /// <value>The display name.</value>
        public string DisplayName
        {
            get { return _bitsJobAdapter.DisplayName; }
            set { _bitsJobAdapter.DisplayName = value; }
        }

        /// <summary>
        /// Gets or sets the priority level of your job. The priority level
        /// determines when your job is processed relative to other jobs in the
        /// transfer queue.
        /// </summary>
        /// <value>The priority.</value>
        public JobPriority Priority
        {
            get { return _bitsJobAdapter.Priority; }
            set { _bitsJobAdapter.Priority = value; }
        }

        /// <summary>
        /// Gets or sets the type of event notification you want to receive, such
        /// as job transferred events.
        /// </summary>
        /// <value>The notify flags.</value>
        [SuppressMessage( "Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId = "Flags" )]
        public NotifyFlags NotifyFlags
        {
            get { return _bitsJobAdapter.NotifyFlags; }
            set { _bitsJobAdapter.NotifyFlags = value; }
        }

        /// <summary>
        /// Gets or sets the minimum length of time that the service waits after
        /// encountering a transient error condition before trying to transfer
        /// the file.
        /// </summary>
        /// <value>The minimum retry delay.</value>
        public long MinimumRetryDelay
        {
            get { return _bitsJobAdapter.MinimumRetryDelay; }
            set { _bitsJobAdapter.MinimumRetryDelay = value; }
        }

        /// <summary>
        /// Gets or sets the length of time that the service tries to transfer the
        /// file after a transient error condition occurs. If there is progress,
        /// the timer is reset.
        /// </summary>
        /// <value>The no progress timeout.</value>
        public long NoProgressTimeout
        {
            get { return _bitsJobAdapter.NoProgressTimeout; }
            set { _bitsJobAdapter.NoProgressTimeout = value; }
        }

        /// <summary>
        /// Gets the number of errors encountered.
        /// </summary>
        /// <value>The number of errors encountered.</value>
        public long NumberOfErrorsEncountered
        {
            get { return _bitsJobAdapter.ErrorCount; }
        }

        /// <summary>
        /// Gets or sets the proxy settings.
        /// </summary>
        /// <value>The proxy settings.</value>
        public ProxySettings ProxySettings
        {
            get { return new ProxySettings( _bitsJobAdapter.ProxySettings ); }
            set { _bitsJobAdapter.ProxySettings = value; }
        }

        /// <summary>
        /// Gets a collection of BitsFile that reflect the current files in the job.
        /// </summary>
        /// <value>The files.</value>
        public IList<BitsFile> Files
        {
            get { return new List<BitsFile>( _bitsJobAdapter.GetBitsFiles() ); }
        }

        #region Implementation of IEnumerable

        /// <summary>
        /// Returns an enumerator that iterates through the collection.
        /// </summary>
        /// <returns>
        /// A <see cref="T:System.Collections.Generic.IEnumerator`1" /> that can be used to iterate through the collection.
        /// </returns>
        /// <filterpriority>1</filterpriority>
        public IEnumerator<BitsFile> GetEnumerator()
        {
            return _bitsJobAdapter.GetEnumerator();
        }

        /// <summary>
        /// Returns an enumerator that iterates through a collection.
        /// </summary>
        /// <returns>
        /// An <see cref="T:System.Collections.IEnumerator" /> object that can be used to iterate through the collection.
        /// </returns>
        /// <filterpriority>2</filterpriority>
        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        #endregion

        #region Implementation of IBitsListener

        /// <summary>
        /// Occurs when there is a error during the specified job.
        /// </summary>
        public event EventHandler<JobErrorEventArgs> JobError;


        /// <summary>
        /// Occurs when the specified job is changed.
        /// </summary>
        public event EventHandler<EventArgs<BitsJob>> JobModification;


        /// <summary>
        /// Occurs when job has completed its file transfer operations.
        /// </summary>
        public event EventHandler<EventArgs<BitsJob>> JobTransferred;

        #endregion Implementation of IBitsListener

        /// <summary>
        /// Releases unmanaged and - optionally - managed resources.
        /// </summary>
        /// <param name="disposing"><c>true</c> to release both managed and unmanaged resources; <c>false</c> to release only unmanaged resources.</param>
        /// <remarks>
        /// A call to base.Dispose( disposing ); must be made by all inheriting classes.
        /// </remarks>
        protected override void Dispose( bool disposing )
        {
            if ( disposing && !IsDisposed )
            {
                if ( _bitsJobAdapter != null )
                {
                    _bitsJobAdapter.Dispose();
                    _bitsJobAdapter = null;
                }
                _callbackAdapter = null;
            }
            base.Dispose( disposing );
        }

        /// <summary>
        /// Adds the file to the job
        /// </summary>
        /// <param name="bitsFileInfo">The bits file info.</param>
        public void AddFile ( BitsFileInfo bitsFileInfo )
        {
            if ( bitsFileInfo == null )
            {
                throw new ArgumentNullException( "bitsFileInfo" );
            }
            _bitsJobAdapter.AddFile( bitsFileInfo.RemoteFileName, bitsFileInfo.LocalFileName );
        }

        /// <summary>
        /// Adds the files.
        /// </summary>
        /// <param name="bitsFiles">The bits files.</param>
        public void AddFiles( IList<BitsFileInfo> bitsFiles )
        {
            if ( bitsFiles == null )
            {
                throw new ArgumentNullException( "bitsFiles" );
            }

            foreach ( BitsFileInfo file in bitsFiles )
            {
                AddFile( file );
            }

            // Renable when AddFileSet is implemented correctly
            //_bitsJobAdapter.AddFileSet( bitsFiles );
        }

        /// <summary>
        /// Suspends a job. New jobs, jobs that are in error, and jobs that have
        /// finished transferring files are automatically suspended.
        /// </summary>
        public void Suspend()
        {
            _bitsJobAdapter.Suspend();
        }

        /// <summary>
        /// Activates a new job or restarts a job that has been suspended.
        /// </summary>
        public void Resume()
        {
            _bitsJobAdapter.Resume();
        }

        /// <summary>
        /// Deletes the job from the transfer queue and removes related
        /// temporary files from the client (downloads) and server (uploads).
        /// </summary>
        public void Cancel()
        {
            _bitsJobAdapter.Cancel();
        }

        /// <summary>
        /// Ends the job and saves the transferred files on the client.
        /// </summary>
        public void Complete()
        {
            _bitsJobAdapter.Complete();
        }

        /// <summary>
        /// Changes ownership of the job to the current user.
        /// </summary>
        /// <remarks>
        /// To take ownership of the job, the user must have administrator
        /// privileges on the client. On Windows Vista, the user must run in an
        /// elevated state. After taking ownership, any future updates to the
        /// job must be done while the user is running in an elevated state.
        /// 
        /// An administrator does not have to take ownership of another user's
        /// job to change its properties or to add files to the job. Typically,
        /// an administrator uses the TakeOwnership method if the user does not
        /// have sufficient permission to complete the job or if the user is not
        /// logged on and the administrator needs the job to complete.
        /// 
        /// After ownership of the job has changed, the job is processed only
        /// when the new owner is logged on to the client. Call the
        /// Owner propterty to retrieve the SID of the new owner.
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
        public void TakeOwnership()
        {
            _bitsJobAdapter.TakeOwnership();
        }

        /// <summary>
        /// Returns a <see cref="T:System.String" /> that represents the current <see cref="T:System.Object" />.
        /// </summary>
        /// <returns>
        /// A <see cref="T:System.String" /> that represents the current <see cref="T:System.Object" />.
        /// </returns>
        /// <filterpriority>2</filterpriority>
        public override string ToString()
        {
            return string.Format( CultureInfo.CurrentCulture, "BitsJobAdapter: {0}", _bitsJobAdapter );
        }

        /// <summary>
        /// Configures the callbacks so that the IBitsListener can post event
        /// notifications. This NotifyFlags can be overwritten later.
        /// </summary>
        private void ConfigureCallbacks()
        {
            // setup events, notify flags should be set by listeners.
            _callbackAdapter = new BitsCallbackAdapter();
            _callbackAdapter.JobError += ( sender, e ) => JobError.Raise( this, e );
            _callbackAdapter.JobModification += ( sender, e ) => JobModification.Raise( this, e );
            _callbackAdapter.JobTransferred += ( sender, e ) => JobTransferred.Raise( this, e );

            // We don't implement the NotifyInterface property from the adapter. Instead it is exposed
            _bitsJobAdapter.NotifyFlags =
                ( NotifyFlags.FileTransferred | NotifyFlags.JobError | NotifyFlags.JobTransferred );
            _bitsJobAdapter.NotifyInterface = _callbackAdapter;
        }
    }
}