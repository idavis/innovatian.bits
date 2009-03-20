namespace BackgroundCopyManager1_5
{
    using System;

    public enum BG_JOB_STATE
    {
        BG_JOB_STATE_QUEUED,
        BG_JOB_STATE_CONNECTING,
        BG_JOB_STATE_TRANSFERRING,
        BG_JOB_STATE_SUSPENDED,
        BG_JOB_STATE_ERROR,
        BG_JOB_STATE_TRANSIENT_ERROR,
        BG_JOB_STATE_TRANSFERRED,
        BG_JOB_STATE_ACKNOWLEDGED,
        BG_JOB_STATE_CANCELLED
    }
}

