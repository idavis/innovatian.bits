#region Using Directives

using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    [BitsVersion( BitsVersion.Bits_30 )]
    [ComImport]
    [Guid( "5CE34C0D-0DC9-4C1F-897C-DAA1B78CEE7C" )]
    [CoClass( typeof (BackgroundCopyManager3_0Class) )]
    internal interface BackgroundCopyManager3_0 : IBackgroundCopyManager
    {
    }
}