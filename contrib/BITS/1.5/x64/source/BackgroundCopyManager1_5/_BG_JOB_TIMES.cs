namespace BackgroundCopyManager1_5
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=4)]
    public struct _BG_JOB_TIMES
    {
        public _FILETIME CreationTime;
        public _FILETIME ModificationTime;
        public _FILETIME TransferCompletionTime;
    }
}

