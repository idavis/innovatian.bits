#region Using Directives

using System;
using System.Runtime.InteropServices;
using System.Text;

#endregion

namespace Eeyore.Bits.Interop
{
    internal static class NativeMethods
    {
        /// <summary>
        /// The LookupAccountSid function accepts a security identifier (SID) as
        /// input. It retrieves the name of the account for this SID and the
        /// name of the first domain on which this SID is found.
        /// </summary>
        /// <param name="lpSystemName">
        /// A pointer to a null-terminated character string that specifies the
        /// target computer. This string can be the name of a remote computer.
        /// If this parameter is NULL, the account name translation begins on
        /// the local system. If the name cannot be resolved on the local
        /// system, this function will try to resolve the name using domain
        /// controllers trusted by the local system. Generally, specify a value
        /// for lpSystemName only when the account is in an untrusted domain and
        /// the name of a computer in that domain is known.
        /// </param>
        /// <param name="lpSid">
        /// A pointer to the SID to look up.
        /// </param>
        /// <param name="lpName">
        /// A pointer to a buffer that receives a null-terminated string that
        /// contains the account name that corresponds to the lpSid parameter.
        /// </param>
        /// <param name="cchName">
        /// On input, specifies the size, in TCHARs, of the lpName buffer. If
        /// the function fails because the buffer is too small or if cchName is
        /// zero, cchName receives the required buffer size, including the
        /// terminating null character.
        /// </param>
        /// <param name="lpReferencedDomainName">
        /// A pointer to a buffer that receives a null-terminated string that
        /// contains the name of the domain where the account name was found.
        /// 
        /// On a server, the domain name returned for most accounts in the
        /// security database of the local computer is the name of the domain
        /// for which the server is a domain controller. 
        /// 
        /// On a workstation, the domain name returned for most accounts in the
        /// security database of the local computer is the name of the computer
        /// as of the last start of the system (backslashes are excluded). If
        /// the name of the computer changes, the old name continues to be
        /// returned as the domain name until the system is restarted.
        /// 
        /// Some accounts are predefined by the system. The domain name returned
        /// for these accounts is BUILTIN.
        /// </param>
        /// <param name="cchReferencedDomainName">
        /// On input, specifies the size, in TCHARs, of the
        /// lpReferencedDomainName buffer. If the function fails because the
        /// buffer is too small or if cchReferencedDomainName is zero,
        /// cchReferencedDomainName receives the required buffer size, including
        /// the terminating null character.
        /// </param>
        /// <param name="peUse">
        /// A pointer to a variable that receives a SID_NAME_USE value that
        /// indicates the type of the account.
        /// </param>
        /// <returns></returns>
        [return : MarshalAs( UnmanagedType.Bool )]
        [DllImport( "advapi32.dll", CharSet = CharSet.Unicode, SetLastError = true, ExactSpelling = true )]
        public static extern bool LookupAccountSidW( [MarshalAs( UnmanagedType.VBByRefStr )] ref string lpSystemName,
                                                     IntPtr lpSid,
                                                     StringBuilder lpName,
                                                     ref long cchName,
                                                     StringBuilder lpReferencedDomainName,
                                                     ref long cchReferencedDomainName,
                                                     ref _SID_NAME_USE peUse );

        /// <summary>
        /// The ConvertStringSidToSid function converts a string-format security
        /// identifier (SID) into a valid, functional SID. You can use this
        /// function to retrieve a SID that the ConvertSidToStringSid function
        /// converted to string format.
        /// </summary>
        /// <param name="StringSid">
        /// A pointer to a null-terminated string containing the string-format
        /// SID to convert. The SID string can use either the standard
        /// S-R-I-S-S… format for SID strings, or the SID string constant
        /// format, such as "BA" for built-in administrators.
        /// </param>
        /// <param name="Sid">
        /// A pointer to a variable that receives a pointer to the converted
        /// SID. To free the returned buffer, call the LocalFree function.
        /// </param>
        /// <returns>
        /// If the function succeeds, the return value is nonzero.
        ///
        /// If the function fails, the return value is zero. To get extended
        /// error information, call GetLastError. The GetLastError function may
        /// return one of the following error codes.
        ///   ERROR_INVALID_PARAMETER ERROR_INVALID_SID
        /// </returns>
        [return : MarshalAs( UnmanagedType.Bool )]
        [DllImport( "advapi32.dll", CharSet = CharSet.Unicode, SetLastError = true, ExactSpelling = true )]
        public static extern bool ConvertStringSidToSidW( [MarshalAs( UnmanagedType.VBByRefStr )] ref string StringSid,
                                                          ref IntPtr Sid );
    }
}