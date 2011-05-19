#region Using Directives

using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    [BitsVersion( BitsVersion.Bits_30 )]
    [ComImport]
    [ClassInterface( ClassInterfaceType.None )]
    [TypeLibType(TypeLibTypeFlags.FCanCreate)]
    [Guid( "659CDEA7-489E-11D9-A9CD-000D56965251" )]
    internal class BackgroundCopyManager3_0Class : BackgroundCopyManager3_0
    {
        #region BackgroundCopyManager3_0 Members

        /// <summary>
        /// Creates a job.
        /// </summary>
        /// <param name="pDisplayName">Null-terminated string that contains a display name for the job.
        /// Typically, the display name is used to identify the job in a user
        /// interface. Note that more than one job may have the same display
        /// name. Must not be NULL. The name is limited to 256 characters, not
        /// including the null terminator.</param>
        /// <param name="Type">Type of transfer job, such as BG_JOB_TYPE_DOWNLOAD. For a list of
        /// transfer types, see the BG_JOB_TYPE enumeration.</param>
        /// <param name="pJobID">Uniquely identifies your job in the queue. Use this identifier when
        /// you call the IBackgroundCopyManager::GetJob method to get a job from
        /// the queue.</param>
        /// <param name="ppJob">An IBackgroundCopyJob interface pointer that you use to modify the
        /// job's properties and specify the files to be transferred. To
        /// activate the job in the queue, call the IBackgroundCopyJob::Resume
        /// method. Release ppJob when done.</param>
        /// <remarks>
        /// Only the user who creates the job or a user with administrator
        /// privileges can add files to the job and change the job's properties.
        /// By default, BITS supports a maximum of 300 jobs at one time. A
        /// single user can create a maximum of 60 jobs at one time. The user
        /// limit does not apply to administrators or service accounts. To
        /// change these defaults, set the MaxJobsPerMachine and MaxJobsPerUser
        /// group policies, respectively.
        /// Prior to Windows Vista:  There is no limit on the number of jobs that BITS supports or that a user can create.
        /// For scalability concerns, see Best Practices When Using BITS.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        public virtual extern void CreateJob( [In] [MarshalAs( UnmanagedType.LPWStr )] string pDisplayName,
                                              [In] BG_JOB_TYPE Type,
                                              out Guid pJobID,
                                              [MarshalAs( UnmanagedType.Interface )] out IBackgroundCopyJob ppJob );

        /// <summary>
        /// Retrieves an interface pointer to an enumerator object that you use
        /// to enumerate the jobs in the transfer queue. The order of the jobs
        /// in the enumerator is arbitrary.
        /// </summary>
        /// <param name="dwFlags">Specifies whose jobs to include in the enumeration. If dwFlags is
        /// set to 0, the user receives all jobs that they own in the transfer
        /// queue. The following table lists the enumeration options.</param>
        /// <param name="ppEnumJobs">An IEnumBackgroundCopyJobs interface pointer that you use to
        /// enumerate the jobs in the transfer queue. The contents of the
        /// enumerator depend on the value of dwFlags. Release ppEnumJobs when
        /// done.</param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        public virtual extern void EnumJobs( [In] BG_JOB_ENUM_USER_TYPE dwFlags,
                                             [MarshalAs( UnmanagedType.Interface )] out IEnumBackgroundCopyJobs
                                                 ppEnumJobs );

        /// <summary>
        /// Retrieves a description for the specified error code.
        /// </summary>
        /// <param name="hResult">Error code from a previous call to a BITS method.</param>
        /// <param name="LanguageId">Identifies the language identifier to use to generate the
        /// description. To create the language identifier, use the MAKELANGID
        /// macro. For example, to specify U.S. English, use the following code
        /// sample.
        /// MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US)
        /// To retrieve the system's default user language identifier, use the
        /// following calls.
        /// LANGIDFROMLCID(GetThreadLocale())</param>
        /// <param name="ppErrorDescription">Null-terminated string that contains a description of the error.
        /// Call the CoTaskMemFree function to free ppErrorDescription when
        /// done.</param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        public virtual extern void GetErrorDescription( [In] [MarshalAs( UnmanagedType.Error )] int hResult,
                                                        [In] uint LanguageId,
                                                        [MarshalAs( UnmanagedType.LPWStr )] out string
                                                            ppErrorDescription );

        /// <summary>
        /// Retrieves a specified job from the transfer queue. Typically, your
        /// application persists the job identifier, so you can later retrieve
        /// the job from the queue.
        /// </summary>
        /// <param name="JobID">Identifies the job to retrieve from the transfer queue. The
        /// CreateJob method returns the job identifier.</param>
        /// <param name="ppJob">An IBackgroundCopyJob interface pointer to the job specified by
        /// JobID. When done, release ppJob.</param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        public virtual extern void GetJob( [In] ref Guid JobID,
                                           [MarshalAs( UnmanagedType.Interface )] out IBackgroundCopyJob ppJob );

        #endregion
    }
}