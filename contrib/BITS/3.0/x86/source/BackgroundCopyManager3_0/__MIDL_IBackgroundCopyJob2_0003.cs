namespace BackgroundCopyManager3_0
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=4)]
    public struct __MIDL_IBackgroundCopyJob2_0003
    {
        [MarshalAs(UnmanagedType.LPWStr)]
        public string UserName;
        [MarshalAs(UnmanagedType.LPWStr)]
        public string Password;
    }
}

