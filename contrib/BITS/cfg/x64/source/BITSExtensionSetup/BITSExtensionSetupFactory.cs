namespace BITSExtensionSetup
{
    using System.Runtime.InteropServices;

    [ComImport, Guid("D5D2D542-5503-4E64-8B48-72EF91A32EE1"), CoClass(typeof(BITSExtensionSetupFactoryClass))]
    public interface BITSExtensionSetupFactory : IBITSExtensionSetupFactory
    {
    }
}

