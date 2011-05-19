#region Using Directives

using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    [BitsVersion( BitsVersion.Bits_25 )]
    [ComImport]
    [Guid( "5CE34C0D-0DC9-4C1F-897C-DAA1B78CEE7C" )]
    [CoClass( typeof (BackgroundCopyManager2_5Class) )]
    internal interface BackgroundCopyManager2_5 : IBackgroundCopyManager
    {
    }
}