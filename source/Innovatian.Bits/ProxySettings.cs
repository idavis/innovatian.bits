#region License

//
// Copyright © 2009 Ian Davis <ian.f.davis@gmail.com>
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#endregion

#region Using Directives

using System;
using System.Collections.Generic;
using Innovatian.Bits.Adapters;
using Innovatian.Bits.Enumerations;

#endregion

namespace Innovatian.Bits
{
    /// <summary>
    /// Specifies the proxy settings used by the BitsJob.
    /// </summary>
    public class ProxySettings
    {
        private readonly List<string> _proxyBypassList;
        private readonly List<string> _proxyList;

        /// <summary>
        /// Adaptor .ctor to allow one type to be easily changed to the other.
        /// This call may throw an exception if it violates rules enforced by
        /// the COM object.
        /// </summary>
        /// <param name="adapter"></param>
        internal ProxySettings( ProxySettingsAdapter adapter )
            : this( adapter.Usage,
                    adapter.ProxyList.Sanitize().Split( new[] {" "}, StringSplitOptions.RemoveEmptyEntries ),
                    adapter.ProxyBypassList.Sanitize().Split( new[] {" "}, StringSplitOptions.RemoveEmptyEntries ) )
        {
        }

        /// <summary>
        /// Copy .ctor. When the user changes the proxy settings, they do not
        /// have effect until the entire object is reassigned. Implementing
        /// INotifyPropertyChanged may be a way around this limitation.
        /// </summary>
        /// <param name="settings"></param>
        internal ProxySettings( ProxySettings settings )
            : this( settings.Usage, settings.ProxyList, settings.ProxyBypassList )
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="ProxySettings"/> class.
        /// </summary>
        public ProxySettings() : this( ProxyUsage.PreConfig )
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="ProxySettings"/> class.
        /// </summary>
        /// <param name="usage">The usage.</param>
        public ProxySettings( ProxyUsage usage ) : this( usage, new string[] {}, new string[] {} )
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="ProxySettings"/> class.
        /// </summary>
        /// <param name="usage">The usage.</param>
        /// <param name="proxyList">The proxy list.</param>
        public ProxySettings( ProxyUsage usage, IEnumerable<string> proxyList )
            : this( usage, proxyList, new string[] {} )
        {
        }


        /// <summary>
        /// Initializes a new instance of the <see cref="ProxySettings"/> class.
        /// </summary>
        /// <param name="usage">The usage.</param>
        /// <param name="proxyList">The proxy list.</param>
        /// <param name="proxyBypassList">The proxy bypass list.</param>
        public ProxySettings( ProxyUsage usage, IEnumerable<string> proxyList, IEnumerable<string> proxyBypassList )
        {
            Usage = usage;
            _proxyList = new List<string>( proxyList );
            _proxyBypassList = new List<string>( proxyBypassList );
        }

        /// <summary>
        /// Gets or sets the proxy usage.
        /// </summary>
        /// <value>The usage.</value>
        public ProxyUsage Usage { get; set; }

        /// <summary>
        /// Gets the proxy list.
        /// </summary>
        /// <value>The proxy list.</value>
        public IList<string> ProxyList
        {
            get { return new List<string>( _proxyList ); }
        }

        /// <summary>
        /// Gets the proxy bypass list.
        /// </summary>
        /// <value>The proxy bypass list.</value>
        public IList<string> ProxyBypassList
        {
            get { return new List<string>( _proxyBypassList ); }
        }

        /// <summary>
        /// Adds the proxy.
        /// </summary>
        /// <exception cref="ArgumentNullException">if the proxy is null or empty.</exception>
        /// <param name="proxy">The proxy.</param>
        public void AddProxy( string proxy )
        {
            if ( string.IsNullOrEmpty( proxy ) )
            {
                throw new ArgumentNullException( "proxy" );
            }
            _proxyList.Add( proxy.Trim() );
        }

        /// <summary>
        /// Adds the proxies.
        /// </summary>
        /// <exception cref="ArgumentNullException">if the collection is null</exception>
        /// <param name="proxies">The proxies.</param>
        public void AddProxies( IEnumerable<string> proxies )
        {
            if ( proxies == null )
            {
                throw new ArgumentNullException( "proxies" );
            }
            _proxyList.AddRange( proxies );
        }

        /// <summary>
        /// Adds the proxy bypass.
        /// </summary>
        /// <exception cref="ArgumentNullException">if the proxyBypass is null or empty.</exception>
        /// <param name="proxyBypass">The proxy bypass.</param>
        public void AddProxyBypass( string proxyBypass )
        {
            if ( string.IsNullOrEmpty( proxyBypass ) )
            {
                throw new ArgumentNullException( "proxyBypass" );
            }
            _proxyBypassList.Add( proxyBypass.Trim() );
        }

        /// <summary>
        /// Adds the proxy bypasses.
        /// </summary>
        /// <exception cref="ArgumentNullException">if the collection is null</exception>
        /// <param name="proxyBypasses">The proxy bypasses.</param>
        public void AddProxyBypasses( IEnumerable<string> proxyBypasses )
        {
            if ( proxyBypasses == null )
            {
                throw new ArgumentNullException( "proxyBypasses" );
            }
            _proxyBypassList.AddRange( proxyBypasses );
        }

        /// <summary>
        /// Removes the proxy.
        /// </summary>
        /// <param name="proxy">The proxy.</param>
        /// <exception cref="ArgumentNullException">if the proxy is null or empty.</exception>
        /// <returns><c>true</c> if the proxy was successfully removed; <c>false</c> otherwise.</returns>
        public bool RemoveProxy( string proxy )
        {
            if ( string.IsNullOrEmpty( proxy ) )
            {
                throw new ArgumentNullException( "proxy" );
            }
            return _proxyList.Remove( proxy );
        }

        /// <summary>
        /// Removes the proxy bypass.
        /// </summary>
        /// <param name="proxyBypass">The proxy bypass.</param>
        /// <exception cref="ArgumentNullException">if the proxyBypass is null or empty.</exception>
        /// <returns><c>true</c> if the proxy bypass was successfully removed; <c>false</c> otherwise.</returns>
        public bool RemoveProxyBypass( string proxyBypass )
        {
            if ( string.IsNullOrEmpty( proxyBypass ) )
            {
                throw new ArgumentNullException( "proxyBypass" );
            }
            return _proxyBypassList.Remove( proxyBypass );
        }
    }
}