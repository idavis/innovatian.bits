namespace BackgroundCopyManager2_0
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=8)]
    public struct _BG_FILE_INFO
    {
        [MarshalAs(UnmanagedType.LPWStr)]
        public string RemoteName;
        [MarshalAs(UnmanagedType.LPWStr)]
        public string LocalName;
    }
}

