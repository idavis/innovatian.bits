#region Using Directives

using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// Use the IEnumBackgroundCopyJobs interface to enumerate the list of jobs
    /// in the transfer queue. To get an IEnumBackgroundCopyJobs interface
    /// pointer, call the IBackgroundCopyManager::EnumJobs method.
    /// </summary>
    [ComImport]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    [Guid( "1AF4F612-3B71-466F-8F58-7B6F73AC57AD" )]
    internal interface IEnumBackgroundCopyJobs
    {
        /// <summary>
        /// Retrieves a specified number of items in the enumeration sequence.
        /// If there are fewer than the requested number of elements left in the
        /// sequence, it retrieves the remaining elements.
        /// </summary>
        /// <param name="celt">
        /// Number of elements requested.
        /// </param>
        /// <param name="rgelt">
        /// Array of IBackgroundCopyJob objects. You must release each object in
        /// rgelt when done.
        /// </param>
        /// <param name="pceltFetched">
        /// Number of elements returned in rgelt. You can set pceltFetched to
        /// NULL if celt is one. Otherwise, initialize the value of pceltFetched
        /// to 0 before calling this method.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "pcelt" )]
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "rgelt" )]
        [SuppressMessage( "Microsoft.Naming", "CA1716:IdentifiersShouldNotMatchKeywords", MessageId = "Next" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "2#" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "1#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Next( [In] uint celt, [MarshalAs( UnmanagedType.Interface )] out IBackgroundCopyJob rgelt,
                   [In] [Out] ref uint pceltFetched );

        /// <summary>
        /// Skips the next specified number of elements in the enumeration
        /// sequence. If there are fewer elements left in the sequence than the
        /// requested number of elements to skip, it skips past the last element
        /// in the sequence.
        /// </summary>
        /// <param name="celt">
        /// Number of elements to skip
        /// </param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Skip( [In] uint celt );

        /// <summary>
        /// Resets the enumeration sequence to the beginning.
        /// </summary>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Reset();

        /// <summary>
        /// Creates another IEnumBackgroundCopyJobs enumerator that contains the
        /// same enumeration state as the current one. Using this method, a
        /// client can record a particular point in the enumeration sequence,
        /// and then return to that point at a later time. The new enumerator
        /// supports the same interface as the original one.
        /// </summary>
        /// <param name="ppEnumJobs">
        /// Receives the interface pointer to the enumeration object. If the
        /// method is unsuccessful, the value of this output variable is
        /// undefined. You must release ppEnumJobs when done.
        /// </param>
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void Clone( [MarshalAs( UnmanagedType.Interface )] out IEnumBackgroundCopyJobs ppEnumJobs );

        /// <summary>
        /// Retrieves a count of the number of jobs in the enumeration.
        /// </summary>
        /// <param name="pCount">
        /// Number of jobs in the enumeration.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetCount( out uint pCount );
    }
}