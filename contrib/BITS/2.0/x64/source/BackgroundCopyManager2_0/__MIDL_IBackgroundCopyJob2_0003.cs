namespace BackgroundCopyManager2_0
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=8)]
    public struct __MIDL_IBackgroundCopyJob2_0003
    {
        [MarshalAs(UnmanagedType.LPWStr)]
        public string UserName;
        [MarshalAs(UnmanagedType.LPWStr)]
        public string Password;
    }
}

