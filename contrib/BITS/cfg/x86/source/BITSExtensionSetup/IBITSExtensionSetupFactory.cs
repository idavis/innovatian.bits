namespace BITSExtensionSetup
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, TypeLibType((short) 0x1040), Guid("D5D2D542-5503-4E64-8B48-72EF91A32EE1")]
    public interface IBITSExtensionSetupFactory
    {
        [return: MarshalAs(UnmanagedType.Interface)]
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime), DispId(1)]
        IBITSExtensionSetup GetObject([In, MarshalAs(UnmanagedType.BStr)] string Path);
    }
}

