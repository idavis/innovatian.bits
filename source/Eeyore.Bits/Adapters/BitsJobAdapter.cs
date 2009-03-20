#region Using Directives

using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.InteropServices;
using Eeyore.Bits.Net.Interop;
using Eeyore.Commons.ObjectModel;

#endregion

namespace Eeyore.Bits.Net.Adapters
{
    internal class BitsJobAdapter : Disposable, IEnumerable<BitsFile>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BitsJobAdapter"/> class.
        /// </summary>
        /// <param name="bitsJob">The bits job.</param>
        protected internal BitsJobAdapter( IBackgroundCopyJob bitsJob )
        {
            BackgroundCopyJob = bitsJob;
        }

        protected IBackgroundCopyJob BackgroundCopyJob { get; private set; }

        /// <summary>
        /// Gets or sets the description.
        /// </summary>
        /// <value>The description.</value>
        public string Description
        {
            get
            {
                try
                {
                    string description;
                    BackgroundCopyJob.GetDescription( out description );
                    return description;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
            set
            {
                try
                {
                    BackgroundCopyJob.SetDescription( value );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets or sets the display name.
        /// </summary>
        /// <value>The display name.</value>
        public string DisplayName
        {
            get
            {
                try
                {
                    string ppDisplayName;
                    BackgroundCopyJob.GetDisplayName( out ppDisplayName );
                    return ppDisplayName;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
            set { BackgroundCopyJob.SetDisplayName( value ); }
        }

        /// <summary>
        /// Gets the error count.
        /// </summary>
        /// <value>The error count.</value>
        public long ErrorCount
        {
            get
            {
                try
                {
                    uint pErrors;
                    BackgroundCopyJob.GetErrorCount( out pErrors );
                    return Convert.ToInt64( pErrors );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the id.
        /// </summary>
        /// <value>The id.</value>
        public Guid Id
        {
            get
            {
                try
                {
                    Guid pJobID;
                    BackgroundCopyJob.GetId( out pJobID );
                    return pJobID;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets or sets the minimum retry delay.
        /// </summary>
        /// <value>The minimum retry delay.</value>
        public long MinimumRetryDelay
        {
            get
            {
                try
                {
                    uint pRetryDelay;
                    BackgroundCopyJob.GetMinimumRetryDelay( out pRetryDelay );
                    return Convert.ToInt64( pRetryDelay );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
            set
            {
                try
                {
                    uint seconds = Convert.ToUInt32( value );
                    BackgroundCopyJob.SetMinimumRetryDelay( seconds );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets or sets the no progress timeout.
        /// </summary>
        /// <value>The no progress timeout.</value>
        public long NoProgressTimeout
        {
            get
            {
                try
                {
                    uint pRetryPeriod;
                    BackgroundCopyJob.GetNoProgressTimeout( out pRetryPeriod );
                    return Convert.ToInt64( pRetryPeriod );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
            set
            {
                try
                {
                    uint retryPeriod = Convert.ToUInt32( value );
                    BackgroundCopyJob.SetNoProgressTimeout( retryPeriod );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets or sets the notify flags.
        /// </summary>
        /// <value>The notify flags.</value>
        protected internal NotifyFlags NotifyFlags
        {
            get
            {
                try
                {
                    BG_NOTIFY_FLAGS pNotifyFlags;
                    BackgroundCopyJob.GetNotifyFlags( out pNotifyFlags );
                    return (NotifyFlags) Convert.ToInt32( (uint) pNotifyFlags );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
            set
            {
                try
                {
                    BackgroundCopyJob.SetNotifyFlags( (BG_NOTIFY_FLAGS) Convert.ToUInt32( (int) value ) );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets or sets the notify interface.
        /// </summary>
        /// <value>The notify interface.</value>
        protected internal IBackgroundCopyCallback NotifyInterface
        {
            get
            {
                try
                {
                    object ppNotifyInterface;
                    BackgroundCopyJob.GetNotifyInterface( out ppNotifyInterface );
                    return (IBackgroundCopyCallback) ppNotifyInterface;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
            set
            {
                try
                {
                    object notifyInterface = value;
                    BackgroundCopyJob.SetNotifyInterface( notifyInterface );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the owner sid.
        /// </summary>
        /// <value>The owner sid.</value>
        public string OwnerSid
        {
            get
            {
                try
                {
                    string ppOwner;
                    BackgroundCopyJob.GetOwner( out ppOwner );
                    return ppOwner;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets or sets the priority.
        /// </summary>
        /// <value>The priority.</value>
        public JobPriority Priority
        {
            get
            {
                try
                {
                    BG_JOB_PRIORITY pPriority;
                    BackgroundCopyJob.GetPriority( out pPriority );
                    return (JobPriority) pPriority;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
            set
            {
                try
                {
                    BackgroundCopyJob.SetPriority( (BG_JOB_PRIORITY) value );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the progress.
        /// </summary>
        /// <value>The progress.</value>
        public JobProgress Progress
        {
            get
            {
                try
                {
                    _BG_JOB_PROGRESS pProgress;
                    BackgroundCopyJob.GetProgress( out pProgress );
                    var progress = new JobProgress( Convert.ToInt32( pProgress.FilesTotal ),
                                                    Convert.ToInt32( pProgress.FilesTransferred ),
                                                    pProgress.BytesTotal,
                                                    pProgress.BytesTransferred );

                    return progress;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets or sets the proxy settings.
        /// </summary>
        /// <value>The proxy settings.</value>
        public ProxySettings ProxySettings
        {
            get
            {
                try
                {
                    string ppProxyBypassList;
                    string ppProxyList;
                    BG_JOB_PROXY_USAGE pProxyUsage;
                    BackgroundCopyJob.GetProxySettings( out pProxyUsage, out ppProxyList, out ppProxyBypassList );
                    return new ProxySettings( new ProxySettingsAdapter( pProxyUsage, ppProxyList, ppProxyBypassList ) );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
            set
            {
                try
                {
                    var adapter = new ProxySettingsAdapter( value );
                    var ProxyUsage = (BG_JOB_PROXY_USAGE) adapter.Usage;
                    BackgroundCopyJob.SetProxySettings( ProxyUsage, adapter.ProxyList, adapter.ProxyBypassList );
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the state.
        /// </summary>
        /// <value>The state.</value>
        public JobState State
        {
            get
            {
                try
                {
                    BG_JOB_STATE jobState;
                    BackgroundCopyJob.GetState( out jobState );
                    return (JobState) jobState;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the type of the job.
        /// </summary>
        /// <value>The type of the job.</value>
        public JobType JobType
        {
            get
            {
                try
                {
                    BG_JOB_TYPE jobType;
                    BackgroundCopyJob.GetType( out jobType );
                    return (JobType) jobType;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Callers are responsible for calling Dispose on the instance they receive.
        /// </summary>
        public BitsErrorAdapter Error
        {
            get
            {
                try
                {
                    IBackgroundCopyError error;
                    BackgroundCopyJob.GetError( out error );
                    return ( error != null ) ? new BitsErrorAdapter( error ) : null;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the name of the owner.
        /// </summary>
        /// <value>The name of the owner.</value>
        public string OwnerName
        {
            get
            {
                try
                {
                    string accountName = Extensions.GetAccountName( OwnerSid );
                    return accountName;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the creation time.
        /// </summary>
        /// <value>The creation time.</value>
        public DateTime CreationTime
        {
            get
            {
                try
                {
                    _BG_JOB_TIMES pTimes;
                    BackgroundCopyJob.GetTimes( out pTimes );
                    return pTimes.CreationTime.ToDateTime();
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the modification time.
        /// </summary>
        /// <value>The modification time.</value>
        public DateTime ModificationTime
        {
            get
            {
                try
                {
                    _BG_JOB_TIMES pTimes;
                    BackgroundCopyJob.GetTimes( out pTimes );
                    return pTimes.ModificationTime.ToDateTime();
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Gets the transfer completion time.
        /// </summary>
        /// <value>The transfer completion time.</value>
        public DateTime TransferCompletionTime
        {
            get
            {
                try
                {
                    _BG_JOB_TIMES pTimes;
                    BackgroundCopyJob.GetTimes( out pTimes );
                    return pTimes.TransferCompletionTime.ToDateTime();
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        #region IEnumerable<BitsFile> Members

        /// <summary>
        /// Returns an enumerator that iterates through the collection.
        /// </summary>
        /// <returns>
        /// A <see cref="T:System.Collections.Generic.IEnumerator`1" /> that can be used to iterate through the collection.
        /// </returns>
        /// <filterpriority>1</filterpriority>
        public IEnumerator<BitsFile> GetEnumerator()
        {
            IEnumBackgroundCopyFiles enumBackgroundCopyFiles;
            uint pceltFetched = 0;
            BackgroundCopyJob.EnumFiles( out enumBackgroundCopyFiles );
            do
            {
                IBackgroundCopyFile rgelt;
                enumBackgroundCopyFiles.Next( 1, out rgelt, ref pceltFetched );
                if ( pceltFetched == 1 )
                {
                    yield return new BitsFile( new BitsFileAdapter( rgelt ) );
                }
            } while ( pceltFetched == 1 );
            Marshal.ReleaseComObject( enumBackgroundCopyFiles );
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

        /// <summary>
        /// Releases unmanaged and - optionally - managed resources.
        /// </summary>
        /// <param name="disposing"><c>true</c> to release both managed and unmanaged resources; <c>false</c> to release only unmanaged resources.</param>
        /// <remarks>
        /// A call to base.Dispose( disposing ); must be made by all inheriting classes.
        /// </remarks>
        protected override void Dispose( bool disposing )
        {
            if ( !IsDisposed )
            {
                if ( BackgroundCopyJob != null )
                {
                    // release the underlying object.
                    Marshal.ReleaseComObject( BackgroundCopyJob );
                    BackgroundCopyJob = null;
                }
            }
            base.Dispose( disposing );
        }

        /// <summary>
        /// Adds the file.
        /// </summary>
        /// <param name="remoteFileName">Name of the remote file.</param>
        /// <param name="localFileName">Name of the local file.</param>
        public void AddFile( string remoteFileName, string localFileName )
        {
            try
            {
                BackgroundCopyJob.AddFile( remoteFileName, localFileName );
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
        }

        /// <summary>
        /// Adds the file set.
        /// TODO: Fix this method so that we don't get memory errors.
        /// </summary>
        /// <param name="bitsFiles">The bits files.</param>
        public void AddFileSet( IList<BitsFileInfo> bitsFiles )
        {
            try
            {
                int i = 0;
                var bgFiles = new _BG_FILE_INFO[bitsFiles.Count];
                foreach ( BitsFileInfo file in bitsFiles )
                {
                    bgFiles[i++] = new _BG_FILE_INFO
                                   {
                                       LocalName = file.LocalFileName,
                                       RemoteName = file.RemoteFileName
                                   };
                }
                BackgroundCopyJob.AddFileSet( Convert.ToUInt32( bitsFiles.Count ), ref bgFiles[0] );
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
        }

        /// <summary>
        /// Deletes the job from the transfer queue and removes related
        /// temporary files from the client (downloads) and server (uploads).
        /// </summary>
        public void Cancel()
        {
            try
            {
                BackgroundCopyJob.Cancel();
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
        }

        /// <summary>
        /// Ends the job and saves the transferred files on the client.
        /// </summary>
        public void Complete()
        {
            try
            {
                BackgroundCopyJob.Complete();
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
        }

        /// <summary>
        /// Gets the bits files using the COM enum interface and massages it
        /// into something .net can use nicely.
        /// </summary>
        /// <returns></returns>
        public IEnumerable<BitsFile> GetBitsFiles()
        {
            IEnumBackgroundCopyFiles enumBackgroundCopyFiles;
            uint pceltFetched = 0;
            BackgroundCopyJob.EnumFiles( out enumBackgroundCopyFiles );
            do
            {
                IBackgroundCopyFile rgelt;
                enumBackgroundCopyFiles.Next( 1, out rgelt, ref pceltFetched );
                if ( pceltFetched == 1 )
                {
                    yield return new BitsFile( new BitsFileAdapter( rgelt ) );
                }
            } while ( pceltFetched == 1 );
            Marshal.ReleaseComObject( enumBackgroundCopyFiles );
        }

        /// <summary>
        /// Activates a new job or restarts a job that has been suspended.
        /// </summary>
        public void Resume()
        {
            try
            {
                BackgroundCopyJob.Resume();
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
        }

        /// <summary>
        /// Suspends a job. New jobs, jobs that are in error, and jobs that have
        /// finished transferring files are automatically suspended.
        /// </summary>
        public void Suspend()
        {
            try
            {
                BackgroundCopyJob.Suspend();
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
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
            try
            {
                BackgroundCopyJob.TakeOwnership();
            }
            catch ( COMException ex )
            {
                throw new BitsException( ex );
            }
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
            return string.Format( CultureInfo.CurrentCulture, "BackgroundCopyJob: {0}", BackgroundCopyJob );
        }
    }
}