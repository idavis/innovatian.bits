#region Using Directives

using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// 
    /// </summary>
    [BitsVersion( BitsVersion.Bits_20 )]
    [ComImport]
    [CoClass( typeof (BackgroundCopyManager2_0Class) )]
    [Guid( "5CE34C0D-0DC9-4C1F-897C-DAA1B78CEE7C" )]
    internal interface BackgroundCopyManager2_0 : IBackgroundCopyManager
    {
    }
}