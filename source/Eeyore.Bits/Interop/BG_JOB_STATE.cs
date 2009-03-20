#region Using Directives

using System.Diagnostics.CodeAnalysis;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// The BG_JOB_STATE enumeration defines constant values for the different
    /// states of a job.
    /// </summary>
    [SuppressMessage( "Microsoft.Naming", "CA1712:DoNotPrefixEnumValuesWithTypeName" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
    [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
    [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
    internal enum BG_JOB_STATE
    {
        /// <summary>
        /// Specifies that the job is in the queue and waiting to run. If a user
        /// logs off while their job is transferring, the job transitions to the
        /// queued state.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "QUEUED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_STATE_QUEUED,

        /// <summary>
        /// Specifies that BITS is trying to connect to the server. If the
        /// connection succeeds, the state of the job becomes
        /// <c>Transferring</c>; otherwise, the state becomes
        /// <c>TransientError</c>.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CONNECTING" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_STATE_CONNECTING,

        /// <summary>
        /// Specifies that BITS is transferring data for the job.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TRANSFERRING" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_STATE_TRANSFERRING,

        /// <summary>
        /// Specifies that the job is suspended (paused). To suspend a job, call
        /// the IBackgroundCopyJob::Suspend method. BITS automatically suspends
        /// a job when it is created. The job remains suspended until you call
        /// the IBackgroundCopyJob::Resume, IBackgroundCopyJob::Complete, or
        /// IBackgroundCopyJob::Cancel method.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "SUSPENDED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_STATE_SUSPENDED,

        /// <summary>
        /// Specifies that a non-recoverable error occurred (the service is
        /// unable to transfer the file). If the error, such as an access-denied
        /// error, can be corrected, call the IBackgroundCopyJob::Resume method
        /// after the error is fixed. However, if the error cannot be corrected,
        /// call the IBackgroundCopyJob::Cancel method to cancel the job, or
        /// call the IBackgroundCopyJob::Complete method to accept the portion
        /// of a download job that transferred successfully.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_STATE_ERROR,

        /// <summary>
        /// Specifies that a recoverable error occurred. BITS will retry jobs in
        /// the transient error state based on the retry interval you specify
        /// (see IBackgroundCopyJob::SetMinimumRetryDelay). The state of the job
        /// changes to BG_JOB_STATE_ERROR if the job fails to make progress (see
        /// IBackgroundCopyJob::SetNoProgressTimeout).
        /// </summary>
        /// <remarks>
        /// BITS does not retry the job if a network disconnect or disk lock
        /// error occurred (for example, chkdsk is running) or the
        /// MaxInternetBandwidth Group Policy is zero.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TRANSIENT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_STATE_TRANSIENT_ERROR,

        /// <summary>
        /// Specifies that your job was successfully processed. You must call
        /// the IBackgroundCopyJob::Complete method to acknowledge completion of
        /// the job and to make the files available to the client.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TRANSFERRED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_STATE_TRANSFERRED,

        /// <summary>
        /// Specifies that you called the IBackgroundCopyJob::Complete method to
        /// acknowledge that your job completed successfully.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ACKNOWLEDGED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        BG_JOB_STATE_ACKNOWLEDGED,

        /// <summary>
        /// Specifies that you called the IBackgroundCopyJob::Cancel method to
        /// cancel the job (remove the job from the transfer queue).
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CANCELLED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId = "CANCELLED" )]
        BG_JOB_STATE_CANCELLED
    }
}