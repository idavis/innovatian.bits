#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    [BitsVersion( BitsVersion.Bits_15 )]
    [ComImport]
    [CoClass( typeof (BackgroundCopyManager1_5Class) )]
    [Guid( "5CE34C0D-0DC9-4C1F-897C-DAA1B78CEE7C" )]
    [SuppressMessage( "Microsoft.Design", "CA1040:AvoidEmptyInterfaces" )]
    [SuppressMessage( "Microsoft.Naming", "CA1715:IdentifiersShouldHaveCorrectPrefix", MessageId = "I" )]
    internal interface BackgroundCopyManager1_5 : IBackgroundCopyManager
    {
    }
}