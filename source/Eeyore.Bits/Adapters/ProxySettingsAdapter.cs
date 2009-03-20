#region Using Directives

using System;
using System.Linq;
using Eeyore.Bits.Net.Interop;

#endregion

namespace Eeyore.Bits.Net.Adapters
{
    /// <summary>
    /// Specified the proxy settings used by the BITS job.
    /// </summary>
    internal class ProxySettingsAdapter
    {
        private const int MaximumListLength = 4000;

        /// <summary>
        /// Initializes a new instance of the <see cref="ProxySettingsAdapter"/> class.
        /// </summary>
        /// <param name="settings">The settings.</param>
        public ProxySettingsAdapter( ProxySettings settings )
            : this( (BG_JOB_PROXY_USAGE) settings.Usage,
                    settings.ProxyList.Aggregate( ( current, next ) => current + " " + next ),
                    settings.ProxyBypassList.Aggregate( ( current, next ) => current + " " + next ) )
        {
        }

        /// <summary>
        /// Specifies which proxy to use to transfer files.
        /// </summary>
        /// <param name="jobProxyUsage">
        /// Specifies whether to use the user's proxy settings, not to use a
        /// proxy, or to use application-specified proxy settings. The default
        /// is to use the user's proxy settings, BG_JOB_PROXY_USAGE_PRECONFIG.
        /// For a list of proxy options, see the BG_JOB_PROXY_USAGE enumeration.
        /// </param>
        /// <param name="pProxyList">
        /// Null-terminated string that contains the proxies to use to transfer
        /// files. The list is space-delimited. For details on specifying a
        /// proxy, see Remarks.
        /// 
        /// This parameter must be NULL if the value of ProxyUsage is
        /// BG_JOB_PROXY_USAGE_PRECONFIG, BG_JOB_PROXY_USAGE_NO_PROXY, or
        /// BG_JOB_PROXY_USAGE_NO_AUTODETECT.
        /// 
        /// The length of the proxy list is limited to 4,000 characters, not
        /// including the null terminator.
        /// </param>
        /// <param name="pProxyBypassList">
        /// Null-terminated string that contains an optional list of host names,
        /// IP addresses, or both, that can bypass the proxy. The list is
        /// space-delimited. For details on specifying a bypass proxy.
        /// 
        /// This parameter must be NULL if the value of ProxyUsage is
        /// BG_JOB_PROXY_USAGE_PRECONFIG, BG_JOB_PROXY_USAGE_NO_PROXY, or
        /// BG_JOB_PROXY_USAGE_NO_AUTODETECT. 
        /// 
        /// The length of the proxy bypass list is limited to 4,000 characters,
        /// not including the null terminator.
        /// </param>
        public ProxySettingsAdapter( BG_JOB_PROXY_USAGE jobProxyUsage, string pProxyList, string pProxyBypassList )
        {
            Usage = (ProxyUsage) jobProxyUsage;

            switch ( Usage )
            {
                case ProxyUsage.PreConfig:
                case ProxyUsage.NoProxy:
                case ProxyUsage.AutoDetect:
                    ProxyList = null;
                    ProxyBypassList = null;
                    break;
                default:
                    if ( pProxyList.Length > MaximumListLength )
                    {
                        throw new ArgumentOutOfRangeException( "pProxyList", pProxyList,
                                                               string.Format(
                                                                   "Proxy list must be less than {0} characters in length.",
                                                                   MaximumListLength ) );
                    }
                    if ( pProxyBypassList.Length > MaximumListLength )
                    {
                        throw new ArgumentOutOfRangeException( "pProxyBypassList", pProxyList,
                                                               string.Format(
                                                                   "Proxy bypass list must be less than {0} characters in length.",
                                                                   MaximumListLength ) );
                    }
                    ProxyList = pProxyList;
                    ProxyBypassList = pProxyBypassList;
                    break;
            }
        }

        /// <summary>
        /// Gets the proxy bypass list.
        /// </summary>
        /// <value>The proxy bypass list.</value>
        public string ProxyBypassList { get; private set; }

        /// <summary>
        /// Gets the proxy list.
        /// </summary>
        /// <value>The proxy list.</value>
        public string ProxyList { get; private set; }

        /// <summary>
        /// Gets the proxy usage.
        /// </summary>
        /// <value>The usage.</value>
        public ProxyUsage Usage { get; private set; }
    }
}