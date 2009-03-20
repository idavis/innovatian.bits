namespace BackgroundCopyManager2_5
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, InterfaceType((short) 1), ComConversionLoss, Guid("F1BD1079-9F01-4BDC-8036-F09B70095066")]
    public interface IBackgroundCopyJobHttpOptions
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetClientCertificateByID([In, ComAliasName("BackgroundCopyManager2_5.BG_CERT_STORE_LOCATION")] BG_CERT_STORE_LOCATION StoreLocation, [In, MarshalAs(UnmanagedType.LPWStr)] string StoreName, [In] ref byte pCertHashBlob);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetClientCertificateByName([In, ComAliasName("BackgroundCopyManager2_5.BG_CERT_STORE_LOCATION")] BG_CERT_STORE_LOCATION StoreLocation, [In, MarshalAs(UnmanagedType.LPWStr)] string StoreName, [In, MarshalAs(UnmanagedType.LPWStr)] string SubjectName);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void RemoveClientCertificate();
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetClientCertificate([ComAliasName("BackgroundCopyManager2_5.BG_CERT_STORE_LOCATION")] out BG_CERT_STORE_LOCATION pStoreLocation, [MarshalAs(UnmanagedType.LPWStr)] out string pStoreName, [Out] IntPtr ppCertHashBlob, [MarshalAs(UnmanagedType.LPWStr)] out string pSubjectName);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetCustomHeaders([In, MarshalAs(UnmanagedType.LPWStr)] string RequestHeaders);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetCustomHeaders([MarshalAs(UnmanagedType.LPWStr)] out string pRequestHeaders);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetSecurityFlags([In] uint Flags);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetSecurityFlags(out uint pFlags);
    }
}

