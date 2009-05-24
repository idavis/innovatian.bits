namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// The SID_NAME_USE enumeration type contains values that specify the type of a security identifier (SID). (http://msdn.microsoft.com/en-us/library/ms721625(VS.85).aspx)
    /// </summary>
    internal enum _SID_NAME_USE
    {
        /// <summary>
        /// A user SID.
        /// </summary>
        SidTypeUser = 1,
        /// <summary>
        /// A group SID.
        /// </summary>
        SidTypeGroup,
        /// <summary>
        /// A domain SID.
        /// </summary>
        SidTypeDomain,
        /// <summary>
        /// An alias SID.
        /// </summary>
        SidTypeAlias,
        /// <summary>
        /// A SID for a well-known group.
        /// </summary>
        SidTypeWellKnownGroup,
        /// <summary>
        /// A SID for a deleted account.
        /// </summary>
        SidTypeDeletedAccount,
        /// <summary>
        /// A SID that is not valid.
        /// </summary>
        SidTypeInvalid,
        /// <summary>
        /// A SID of unknown type.
        /// </summary>
        SidTypeUnknown,
        /// <summary>
        /// A SID for a computer.
        /// </summary>
        SidTypeComputer,
        /// <summary>
        /// A mandatory integrity label SID.
        /// </summary>
        SidTypeLabel
    }
}