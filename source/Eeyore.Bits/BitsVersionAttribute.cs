#region Using Directives

using System;

#endregion

namespace Eeyore.Bits.Net
{
    public class BitsVersionAttribute : Attribute
    {
        public BitsVersionAttribute( BitsVersion version )
        {
            Version = version;
        }

        public BitsVersion Version { get; private set; }
    }

    public enum BitsVersion
    {
        Bits_10,
        Bits_15,
        Bits_20,
        Bits_25,
        Bits_30
    }
}