#region Using Directives

using System.Collections.Generic;
using System.Linq;
using Eeyore.Bits.Net.Adapters;
using Eeyore.Bits.Net.Interop;

#endregion

namespace Eeyore.Bits.Net
{
    public class BitsManager
    {
        public IList<BitsJob> JobsForCurrentUser
        {
            get { return BitsManagerAdapter.GetCurrentUserJobs().ToList(); }
        }

        public  IList<BitsJob> JobsForAllUsers
        {
            get { return BitsManagerAdapter.GetAllUserJobs().ToList(); }
        }

        public BitsJob CreateJob(string jobName, string description)
        {
            BitsJob bitsJob = BitsManagerAdapter.CreateBitsJob( jobName, BG_JOB_TYPE.BG_JOB_TYPE_UPLOAD, description );
            return bitsJob;
        }
    }
}