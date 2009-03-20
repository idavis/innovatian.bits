namespace BackgroundCopyManager2_0
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, Guid("97EA99C7-0186-4AD4-8DF9-C5B4E0ED6B22"), InterfaceType((short) 1)]
    public interface IBackgroundCopyCallback
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void JobTransferred([In, MarshalAs(UnmanagedType.Interface)] IBackgroundCopyJob pJob);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void JobError([In, MarshalAs(UnmanagedType.Interface)] IBackgroundCopyJob pJob, [In, MarshalAs(UnmanagedType.Interface)] IBackgroundCopyError pError);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void JobModification([In, MarshalAs(UnmanagedType.Interface)] IBackgroundCopyJob pJob, [In] uint dwReserved);
    }
}

