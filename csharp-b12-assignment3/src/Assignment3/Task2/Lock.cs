using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task2
{
    public class Lock
    {
        public string lockStatus;

        public string LockStatus
        {
            get
            {
                return lockStatus;   
            }
            set
            {
                if(lockStatus =="open" || lockStatus =="close")
                    lockStatus = value;
            }
        } // Correct lock status are: Open & Close
    }
}
