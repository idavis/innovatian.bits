namespace BackgroundCopyManager2_5
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=8)]
    public struct _BG_JOB_PROGRESS
    {
        public ulong BytesTotal;
        public ulong BytesTransferred;
        public uint FilesTotal;
        public uint FilesTransferred;
    }
}

