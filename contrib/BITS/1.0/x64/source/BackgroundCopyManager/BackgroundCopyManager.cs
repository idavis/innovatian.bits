namespace BackgroundCopyManager
{
    using System.Runtime.InteropServices;

    [ComImport, Guid("5CE34C0D-0DC9-4C1F-897C-DAA1B78CEE7C"), CoClass(typeof(BackgroundCopyManagerClass))]
    public interface BackgroundCopyManager : IBackgroundCopyManager
    {
    }
}

