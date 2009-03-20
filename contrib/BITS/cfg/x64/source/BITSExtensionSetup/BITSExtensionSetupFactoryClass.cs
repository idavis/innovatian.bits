namespace BITSExtensionSetup
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, Guid("EFBBAB68-7286-4783-94BF-9461D8B7E7E9"), ClassInterface((short) 0), TypeLibType((short) 2)]
    public class BITSExtensionSetupFactoryClass : IBITSExtensionSetupFactory, BITSExtensionSetupFactory
    {
        [return: MarshalAs(UnmanagedType.Interface)]
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime), DispId(1)]
        public virtual extern IBITSExtensionSetup GetObject([In, MarshalAs(UnmanagedType.BStr)] string Path);
    }
}

