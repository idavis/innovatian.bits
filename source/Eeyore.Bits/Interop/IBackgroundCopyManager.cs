#region Using Directives

using System;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// Creates transfer jobs, retrieves an enumerator object that contains the
    /// jobs in the queue, and retrieves individual jobs from the queue. For an
    /// example that creates a new job, see Creating a Job
    /// (http://msdn.microsoft.com/en-us/library/aa362834(VS.85).aspx). For
    /// information on how to create an instance of this interface, see
    /// Connecting to the BITS Service
    /// (http://msdn.microsoft.com/en-us/library/aa362832(VS.85).aspx).
    /// </summary>
    /// <remarks>
    /// Windows Vista and later:  When an ActiveX control tries to instantiate this interface from an Internet Explorer process, the call will fail with access denied. This is because COM does not allow lower-integrity clients to bind to class instances at higher integrity levels. For details, see Understanding and Working in Protected Mode Internet Explorer and How the Integrity Mechanism Is Implemented in Windows Vista. A user can workaround the issue by adding the website to the Trusted site zone.
    /// </remarks>
    [ComImport]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    [CoClass(typeof(BackgroundCopyManagerClass))]
    [Guid( "5CE34C0D-0DC9-4C1F-897C-DAA1B78CEE7C" )]
    internal interface IBackgroundCopyManager
    {
        /// <summary>
        /// Creates a job.
        /// </summary>
        /// <param name="pDisplayName">
        /// Null-terminated string that contains a display name for the job.
        /// Typically, the display name is used to identify the job in a user
        /// interface. Note that more than one job may have the same display
        /// name. Must not be NULL. The name is limited to 256 characters, not
        /// including the null terminator.
        /// </param>
        /// <param name="Type">
        /// Type of transfer job, such as BG_JOB_TYPE_DOWNLOAD. For a list of
        /// transfer types, see the BG_JOB_TYPE enumeration.
        /// </param>
        /// <param name="pJobID">
        /// Uniquely identifies your job in the queue. Use this identifier when
        /// you call the IBackgroundCopyManager::GetJob method to get a job from
        /// the queue.
        /// </param>
        /// <param name="ppJob">
        /// An IBackgroundCopyJob interface pointer that you use to modify the
        /// job's properties and specify the files to be transferred. To
        /// activate the job in the queue, call the IBackgroundCopyJob::Resume
        /// method. Release ppJob when done.
        /// </param>
        /// <remarks>
        /// Only the user who creates the job or a user with administrator
        /// privileges can add files to the job and change the job's properties.
        /// 
        /// By default, BITS supports a maximum of 300 jobs at one time. A
        /// single user can create a maximum of 60 jobs at one time. The user
        /// limit does not apply to administrators or service accounts. To
        /// change these defaults, set the MaxJobsPerMachine and MaxJobsPerUser
        /// group policies, respectively.
        /// Prior to Windows Vista:  There is no limit on the number of jobs that BITS supports or that a user can create.
        /// 
        /// For scalability concerns, see Best Practices When Using BITS.
        /// </remarks>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ID" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Type" )]
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "p" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "2#" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "3#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void CreateJob( [In] [MarshalAs( UnmanagedType.LPWStr )] string pDisplayName,
                        [In] BG_JOB_TYPE Type,
                        out Guid pJobID,
                        [MarshalAs( UnmanagedType.Interface )] out IBackgroundCopyJob ppJob );

        /// <summary>
        /// Retrieves a specified job from the transfer queue. Typically, your
        /// application persists the job identifier, so you can later retrieve
        /// the job from the queue.
        /// </summary>
        /// <param name="JobID">
        /// Identifies the job to retrieve from the transfer queue. The
        /// CreateJob method returns the job identifier.
        /// </param>
        /// <param name="ppJob">
        /// An IBackgroundCopyJob interface pointer to the job specified by
        /// JobID. When done, release ppJob.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ID" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Job" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "1#" )]
        [SuppressMessage( "Microsoft.Design", "CA1045:DoNotPassTypesByReference", MessageId = "0#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetJob([In] ref Guid JobID,
                     [MarshalAs( UnmanagedType.Interface )] out IBackgroundCopyJob ppJob );

        /// <summary>
        /// Retrieves an interface pointer to an enumerator object that you use
        /// to enumerate the jobs in the transfer queue. The order of the jobs
        /// in the enumerator is arbitrary.
        /// </summary>
        /// <param name="dwFlags">
        /// Specifies whose jobs to include in the enumeration. If dwFlags is
        /// set to 0, the user receives all jobs that they own in the transfer
        /// queue. The following table lists the enumeration options.
        /// </param>
        /// <param name="ppEnumJobs">
        /// An IEnumBackgroundCopyJobs interface pointer that you use to
        /// enumerate the jobs in the transfer queue. The contents of the
        /// enumerator depend on the value of dwFlags. Release ppEnumJobs when
        /// done.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "dw" )]
        [SuppressMessage( "Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId = "Flags" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "1#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void EnumJobs( [In] BG_JOB_ENUM_USER_TYPE dwFlags,
                       [MarshalAs( UnmanagedType.Interface )] out IEnumBackgroundCopyJobs ppEnumJobs );

        /// <summary>
        /// Retrieves a description for the specified error code.
        /// </summary>
        /// <param name="hResult">
        /// Error code from a previous call to a BITS method.
        /// </param>
        /// <param name="LanguageId">
        /// Identifies the language identifier to use to generate the
        /// description. To create the language identifier, use the MAKELANGID
        /// macro. For example, to specify U.S. English, use the following code
        /// sample. 
        /// 
        /// MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US)
        /// 
        /// To retrieve the system's default user language identifier, use the
        /// following calls.
        /// 
        /// LANGIDFROMLCID(GetThreadLocale())
        /// </param>
        /// <param name="ppErrorDescription">
        /// Null-terminated string that contains a description of the error.
        /// Call the CoTaskMemFree function to free ppErrorDescription when
        /// done.
        /// </param>
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "Language" )]
        [SuppressMessage( "Microsoft.Naming", "CA1704:IdentifiersShouldBeSpelledCorrectly", MessageId = "h" )]
        [SuppressMessage( "Microsoft.Design", "CA1021:AvoidOutParameters", MessageId = "2#" )]
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetErrorDescription( [In] [MarshalAs( UnmanagedType.Error )] int hResult, [In] uint LanguageId,
                                  [MarshalAs( UnmanagedType.LPWStr )] out string ppErrorDescription );
    }
}