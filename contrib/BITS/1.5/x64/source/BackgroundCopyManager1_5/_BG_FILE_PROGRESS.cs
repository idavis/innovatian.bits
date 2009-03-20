namespace BackgroundCopyManager1_5
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=8)]
    public struct _BG_FILE_PROGRESS
    {
        public ulong BytesTotal;
        public ulong BytesTransferred;
        public int Completed;
    }
}

