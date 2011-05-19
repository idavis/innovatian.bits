#region Using Directives

using System;

#endregion

namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// 
    /// </summary>
    [Flags]
    internal enum BG_COPY_FILE_ACLFLAGS : uint
    {
        /// <summary>
        /// If set, the file's owner information is maintained. Otherwise, the user who calls the Complete method owns the file.
        /// 
        /// You must have SeRestorePrivilege to set this flag. The administrators group contains the SeRestorePrivilege privilege.
        /// </summary>
        BG_COPY_FILE_OWNER = 1,
        /// <summary>
        /// If set, the file's group information is maintained. Otherwise, BITS uses the job owner's primary group to assign the group information to the file.
        /// 
        /// You must have SeRestorePrivilege to set this flag. The administrators group contains the SeRestorePrivilege privilege.
        /// </summary>
        BG_COPY_FILE_GROUP = 2,
        /// <summary>
        /// If set, BITS copies the explicit ACEs from the source file and inheritable ACEs from the destination parent folder. Otherwise, BITS copies the inheritable ACEs from the destination parent folder. If the parent folder does not contain inheritable ACEs, BITS uses the default DACL from the account. 
        /// </summary>
        BG_COPY_FILE_DACL = 4,
        /// <summary>
        /// If set, BITS copies the explicit ACEs from the source file and inheritable ACEs from the destination folder. Otherwise, BITS copies the inheritable ACEs from the destination folder.
        /// 
        /// You must have SeSecurityPrivilege on both the local and remote computers to set this flag. The administrators group contains the SeSecurityPrivilege privilege.
        /// </summary>
        BG_COPY_FILE_SACL = 8,
        /// <summary>
        /// If set, BITS copies the owner and ACL information. This is the same as setting all the flags individually.
        /// </summary>
        BG_COPY_FILE_ALL = 15
    }
}