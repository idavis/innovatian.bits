#region Using Directives

using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// Use the IBITSExtensionSetupFactory interface to get a pointer to the IBITSExtensionSetup interface. Only use this interface if you use the IBITSExtensionSetup interface in a setup program that also installs the BITS server. Because the IIS cache does not contain the BITS extensions added during setup, the extensions are not available using the ADsGetObject ADSI function. The IBITSExtensionSetupFactory interface provides a GetObject method, which accesses the BITS extensions and performs the same binding as the ADsGetObject function.
    /// 
    /// To get a pointer to the IBITSExtensionSetupFactory interface, call the CoCreateInstance function as shown in Example Code.
    /// </summary>
    /// <remarks>
    /// This interface is registered on the server when you install the BITS server extension. On Windows 2000 Server, use the BITS redistributable to install the BITS server extension. For details on the redistributable, see Run-time Requirements.
    /// 
    /// On Windows Server 2003, use the Windows Components Wizard to install the BITS server extension. From Control Panel, select Add or Remove Programs. Then, select Add/Remove Windows Components to display the Windows Components Wizard. The BITS server extension is a sub-component of Internet Information Services (IIS) which is a sub-component of Web Application Server.
    /// </remarks>
    [ComImport]
    [Guid( "D5D2D542-5503-4E64-8B48-72EF91A32EE1" )]
    [CoClass( typeof (BITSExtensionSetupFactoryClass) )]
    internal interface BITSExtensionSetupFactory : IBITSExtensionSetupFactory
    {
    }
}