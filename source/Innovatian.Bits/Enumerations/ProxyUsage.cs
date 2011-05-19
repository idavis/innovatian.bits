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

namespace Innovatian.Bits.Enumerations
{
    /// <summary>
    /// The ProxyUsage enumeration defines constant values that specify
    /// which proxy to use for file transfers. You can define different proxy
    /// settings for each job.
    /// </summary>
    public enum ProxyUsage
    {
        /// <summary>
        /// Use the proxy and proxy bypass list settings defined by each user to
        /// transfer files. Settings are user-defined from Control Panel,
        /// Internet Options, Connections, Local Area Network (LAN) settings (or
        /// Dial-up settings, depending on the network connection).
        /// </summary>
        PreConfig = 0,

        /// <summary>
        /// Do not use a proxy to transfer files. Use this option when you
        /// transfer files within a LAN.
        /// </summary>
        NoProxy = 1,

        /// <summary>
        /// Use the application's proxy and proxy bypass list to transfer files.
        /// Use this option when you cannot trust that the system settings are
        /// correct. Also use this option when you want to transfer files using
        /// a special account, such as LocalSystem, to which the system settings
        /// do not apply.
        /// </summary>
        Override = 2,

        /// <summary>
        /// Automatically detect proxy settings. BITS detects proxy settings for
        /// each file in the job.
        /// </summary>
        /// <remarks>
        /// This is only available on Windows Vista and higher.
        /// </remarks>
        AutoDetect = 3
    }
}