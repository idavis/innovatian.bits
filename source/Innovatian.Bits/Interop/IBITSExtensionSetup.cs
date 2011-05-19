#region Using Directives

using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// Use the IBITSExtensionSetup interface to enable or disable BITS uploads to a virtual directory.
    /// 
    /// This interface is an ADSI extension. To get a pointer to this interface, call the ADsGetObject ADSI function as shown in Example Code.
    /// 
    /// If you use this interface from a setup program that also installs the BITS server, you must call the IBITSExtensionSetupFactory::GetObject method to get a pointer to this interface instead of calling the ADsGetObject function.
    /// <remarks>
    /// This interface is registered on the server when you install the BITS server extension. On Windows 2000 Server, use the BITS redistributable to install the BITS server extension. For details on the redistributable, see Run-time Requirements.
    /// On Windows Server 2003, use the Windows Components Wizard to install the BITS server extension. From Control Panel, select Add or Remove Programs. Then, select Add/Remove Windows Components to display the Windows Components Wizard. The BITS server extension is a sub-component of Internet Information Services (IIS) which is a sub-component of Web Application Server.
    /// </remarks>
    /// </summary>
    [ComImport]
    [Guid( "29CFBBF7-09E4-4B97-B0BC-F2287E3D8EB3" )]
    [TypeLibType( (short) 0x1040 )]
    internal interface IBITSExtensionSetup
    {
        /// <summary>
        /// Use the EnableBITSUploads method to enable BITS upload on the virtual directory to which the ADSI object points. This method sets the BITSUploadEnabled IIS extension property.
        /// </summary>
        /// <remarks>
        /// This method turns off the scripting and execute permissions on the virtual directory; you cannot upload files to a virtual directory that has scripting and execute permissions enabled. If the permissions are restored after calling this method, the upload jobs fail with an error code of BG_E_SERVER_EXECUTE_ENABLED.
        /// 
        /// The EnableBITSUploads method fails if the Task Scheduler is disabled.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        [DispId( 1 )]
        void EnableBITSUploads();

        /// <summary>
        /// Use the DisableBITSUploads method to disable BITS upload on the virtual directory to which the ADSI object points. This method sets the BITSUploadEnabled IIS extension property.
        /// </summary>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        [DispId( 2 )]
        void DisableBITSUploads();

        /// <summary>
        /// Use the GetCleanupTaskName method to retrieve the name of the cleanup task associated with the virtual directory.
        /// </summary>
        /// <returns>
        /// Null terminated string containing the name of the cleanup task associated with the virtual directory. If NULL, BITS has not created a cleanup task for the virtual directory. When done, call the SysFreeString function to free pTaskName.
        /// </returns>
        /// <remarks>
        /// When you create a virtual directory and enable it for BITS uploads, BITS adds a work item in the Task Scheduler. The work item cleans up the virtual directory once every 12 hours by deleting jobs that have not been modified within the time-out period. To specify the time-out period, set the BITSSessionTimeout IIS extension property.
        /// 
        /// Use the pTaskName name as an input parameter to the Schtasks.exe executable file, which you can use to change the properties of the cleanup task from a script.
        /// </remarks>
        [return : MarshalAs( UnmanagedType.BStr )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        [DispId( 3 )]
        string GetCleanupTaskName();

        /// <summary>
        /// Use the GetCleanupTask method to retrieve an interface pointer to the cleanup task associated with the virtual directory.
        /// </summary>
        /// <param name="riid">
        /// Identifies the task scheduler interface to return in ppTask. For a list of identifiers, see the ITaskScheduler::Activate method.
        /// </param>
        /// <returns>
        /// A pointer to the interface specified by riid. Use the interface to modify the properties of the task. Release ppTask when done.
        /// </returns>
        /// <remarks>
        /// When you create a virtual directory and enable it for BITS uploads, BITS adds a work item in the Task Scheduler. The work item cleans up the virtual directory once every 12 hours by deleting jobs that have not been modified within the time-out period. To specify the time-out period, set the BITSSessionTimeout IIS extension property.
        /// 
        /// To change the cleanup schedule, see the BITSCleanupUseDefault BITS IIS extension property.
        /// </remarks>
        [return : MarshalAs( UnmanagedType.IUnknown )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        [DispId( 4 )]
        object GetCleanupTask( [In] ref Guid riid );
    }
}