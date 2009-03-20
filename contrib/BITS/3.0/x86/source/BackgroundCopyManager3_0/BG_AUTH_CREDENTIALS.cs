namespace BackgroundCopyManager3_0
{
    using System;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Sequential, Pack=4)]
    public struct BG_AUTH_CREDENTIALS
    {
        public __MIDL_IBackgroundCopyJob2_0001 Target;
        public __MIDL_IBackgroundCopyJob2_0002 Scheme;
        public __MIDL_IBackgroundCopyJob2_0004 Credentials;
    }
}

