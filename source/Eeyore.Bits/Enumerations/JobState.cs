#region License

//
// Copyright © 2009 Ian Davis <ian.f.davis@gmail.com>
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#endregion

namespace Eeyore.Bits.Enumerations
{
    /// <summary>
    /// The JobState enumeration defines constant values for the different
    /// states of a job.
    /// </summary>
    public enum JobState
    {
        /// <summary>
        /// Specifies that the job is in the queue and waiting to run. If a user
        /// logs off while their job is transferring, the job transitions to the
        /// queued state.
        /// </summary>
        Queued = 0,

        /// <summary>
        /// Specifies that BITS is trying to connect to the server. If the
        /// connection succeeds, the state of the job becomes
        /// <c>Transferring</c>; otherwise, the state becomes
        /// <c>TransientError</c>.
        /// </summary>
        Connecting = 1,

        /// <summary>
        /// Specifies that BITS is transferring data for the job.
        /// </summary>
        Transferring = 2,

        /// <summary>
        /// Specifies that the job is suspended (paused). To suspend a job, call
        /// the IBackgroundCopyJob::Suspend method. BITS automatically suspends
        /// a job when it is created. The job remains suspended until you call
        /// the IBackgroundCopyJob::Resume, IBackgroundCopyJob::Complete, or
        /// IBackgroundCopyJob::Cancel method.
        /// </summary>
        Suspended = 3,

        /// <summary>
        /// Specifies that a non-recoverable error occurred (the service is
        /// unable to transfer the file). If the error, such as an access-denied
        /// error, can be corrected, call the IBackgroundCopyJob::Resume method
        /// after the error is fixed. However, if the error cannot be corrected,
        /// call the IBackgroundCopyJob::Cancel method to cancel the job, or
        /// call the IBackgroundCopyJob::Complete method to accept the portion
        /// of a download job that transferred successfully.
        /// </summary>
        Error = 4,

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
        TransientError = 5,

        /// <summary>
        /// Specifies that your job was successfully processed. You must call
        /// the IBackgroundCopyJob::Complete method to acknowledge completion of
        /// the job and to make the files available to the client.
        /// </summary>
        Transferred = 6,

        /// <summary>
        /// Specifies that you called the IBackgroundCopyJob::Complete method to
        /// acknowledge that your job completed successfully.
        /// </summary>
        Acknowledge = 7,

        /// <summary>
        /// Specifies that you called the IBackgroundCopyJob::Cancel method to
        /// cancel the job (remove the job from the transfer queue).
        /// </summary>
        Canceled = 8
    }
}