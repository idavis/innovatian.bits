namespace BackgroundCopyManager1_5
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=8)]
    public struct BG_AUTH_CREDENTIALS
    {
        public __MIDL_IBackgroundCopyJob2_0001 Target;
        public __MIDL_IBackgroundCopyJob2_0002 Scheme;
        public __MIDL_IBackgroundCopyJob2_0004 Credentials;
    }
}

