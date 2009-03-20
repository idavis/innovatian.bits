namespace BackgroundCopyManager2_0
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=8)]
    public struct _BG_FILE_RANGE
    {
        public ulong InitialOffset;
        public ulong Length;
    }
}

