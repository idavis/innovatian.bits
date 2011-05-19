#region Using Directives

using System.Runtime.CompilerServices;
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
    [Guid( "EFBBAB68-7286-4783-94BF-9461D8B7E7E9" )]
    [ClassInterface( (short) 0 )]
    [TypeLibType( (short) 2 )]
    internal class BITSExtensionSetupFactoryClass : BITSExtensionSetupFactory
    {
        #region BITSExtensionSetupFactory Members

        /// <summary>
        /// Use the GetObject method to retrieve a pointer to the IBITSExtensionSetup interface. This method performs the same binding that the ADsGetObject ADSI function performs.
        /// </summary>
        /// <param name="Path">
        /// Null terminated string containing the path to the directory service. For example, "IIS://<machine name>/w3svc/1/<virtual directory>".
        /// </param>
        /// <returns>
        /// Use the IBITSExtensionSetup interface to enable and disable BITS upload for the given virtual directory.
        /// </returns>
        [return : MarshalAs( UnmanagedType.Interface )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        [DispId( 1 )]
        public virtual extern IBITSExtensionSetup GetObject( [In] [MarshalAs( UnmanagedType.BStr )] string Path );

        #endregion
    }
}