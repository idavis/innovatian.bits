namespace BackgroundCopyManager2_0
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=8)]
    public struct _BG_JOB_REPLY_PROGRESS
    {
        public ulong BytesTotal;
        public ulong BytesTransferred;
    }
}

