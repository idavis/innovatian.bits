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
using System.Globalization;
using System.Runtime.InteropServices.ComTypes;
using System.Text;
using Eeyore.Bits.Interop;

#endregion

namespace Eeyore.Bits
{
    internal static class Extensions
    {
        public static void Raise<T>( this EventHandler<T> handler, object sender, T args )
            where T : EventArgs
        {
            if ( handler != null )
            {
                handler( sender, args );
            }
        }

        public static string Sanitize( this string value )
        {
            return ( value ?? string.Empty ).Trim();
        }

        public static uint LanguageId( this CultureInfo value )
        {
            return Convert.ToUInt32( value.LCID );
        }

        public static string GetAccountName( string SID )
        {
            return GetName( SID );
        }

        public static string GetName( string SID )
        {
            long cchName = 255L;
            long cchReferencedDomainName = 255L;
            var sID = new IntPtr( 0 );
            _SID_NAME_USE peUse = 0;
            var lpName = new StringBuilder( 255 );
            var lpReferencedDomainName = new StringBuilder( 255 );
            string lpSystemName = string.Empty;
            bool success = NativeMethods.ConvertStringSidToSidW( ref SID, ref sID ) &&
                           NativeMethods.LookupAccountSidW( ref lpSystemName,
                                                            sID,
                                                            lpName,
                                                            ref cchName,
                                                            lpReferencedDomainName,
                                                            ref cchReferencedDomainName,
                                                            ref peUse );
            return success
                       ? string.Format( CultureInfo.InvariantCulture, @"{0}\{1}", lpReferencedDomainName, lpName )
                       : string.Empty;
        }

        public static DateTime ToDateTime( this FILETIME value )
        {
            var destinationArray = new byte[8];
            Array.Copy( BitConverter.GetBytes( value.dwHighDateTime ), 0, destinationArray, 4, 4 );
            Array.Copy( BitConverter.GetBytes( value.dwLowDateTime ), 0, destinationArray, 0, 4 );
            return DateTime.FromFileTime( BitConverter.ToInt64( destinationArray, 0 ) );
        }
    }
}