#region Using Directives

using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// The BG_BASIC_CREDENTIALS structure identifies the user name and password
    /// to authenticate.
    /// </summary>
    /// <remarks>
    /// The following list identifies when the UserName and Password members are
    /// required based on the authentication scheme requested.
    /// 
    /// BG_AUTH_SCHEME_BASIC
    /// 
    ///     Requires a valid user name and password.
    /// BG_AUTH_SCHEME_DIGEST
    /// 
    ///     Requires a valid user name and password.
    /// BG_AUTH_SCHEME_NTLM
    /// 
    ///     Optional if the user's account is a domain user account. If the user
    ///     name and password are NULL, the session credentials are used
    ///     (specifies implicit credentials). However, if the account is a local
    ///     user account, a valid user name and password are required.
    /// BG_AUTH_SCHEME_NEGOTIATE
    /// 
    ///     Optional if the user's account is a domain user account. If NULL,
    ///     the session credentials are used. However, if the account is a local
    ///     user account, a valid user name and password are required.
    /// BG_AUTH_SCHEME_PASSPORT
    /// 
    ///     Requires a valid e-mail address and password. BITS supports passport
    ///     authentication for explicit credentials only, not implicit
    ///     credentials tied to the account.
    /// 
    /// To protect the user name and password information, call the
    /// SecureZeroMemory function, defined in winbase.h, to clear the UserName
    /// and Password buffers after you use the structure.
    /// 
    /// You can specify the user name as domain\username, servername\username,
    /// username, or NULL. Use domain\username if the server is in a domain and
    /// the domain name is the domain to which the server belongs or is a
    /// trusted domain. Use servername\username if the account is a local
    /// account on the server. The servername is the name of the computer that
    /// is authenticating the credentials. If you specify only username, the
    /// user's default domain name is prefixed to the user's name and the rules
    /// for the domain\username form apply. Use this option only if the user is
    /// a member of a domain.
    /// 
    /// To use the user's logon credentials for NTLM or Kerberos authentication,
    /// set user name to NULL. This works only if the user is in a trusted
    /// domain. Setting user name to NULL for services running as a system
    /// account, passes the computer's credentials for authentication. This
    /// option works only if the domain enables Kerberos authentication and you
    /// select Negotiate as the authentication scheme. 
    /// </remarks>
    [BitsVersion( BitsVersion.Bits_15 )]
#if x64
    [StructLayout( LayoutKind.Sequential, Pack = 8 )]
#else
    [StructLayout( LayoutKind.Sequential, Pack = 4 )]
#endif
    internal struct BG_BASIC_CREDENTIALS
    {
        /// <summary>
        /// Null-terminated string that contains the user name to authenticate.
        /// The user name is limited to 300 characters, not including the null
        /// terminator. The format of the user name depends on the
        /// authentication scheme requested. For example, for Basic, NTLM, and
        /// Negotiate authentication, the user name is of the form "domain\user
        /// name". For Passport authentication, the user name is an e-mail
        /// address. For more information, see Remarks. If NULL, default
        /// credentials for this session context are used.
        /// </summary>
        [MarshalAs( UnmanagedType.LPWStr )]
        public string UserName;

        /// <summary>
        /// Null-terminated string that contains the password in clear-text. The
        /// password is limited to 300 characters, not including the null
        /// terminator. The password can be blank. Set to NULL if UserName is
        /// NULL. BITS encrypts the password before persisting the job if a
        /// network disconnect occurs or the user logs off.
        /// </summary>
        [MarshalAs( UnmanagedType.LPWStr )]
        public string Password;
    }
}