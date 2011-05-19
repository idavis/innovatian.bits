namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// The BG_CERT_STORE_LOCATION enumeration defines the location of the certificate store.
    /// </summary>
    [BitsVersion( BitsVersion.Bits_25 )]
    internal enum BG_CERT_STORE_LOCATION
    {
        /// <summary>
        /// Use the current user's certificate store.
        /// </summary>
        BG_CERT_STORE_LOCATION_CURRENT_USER,
        /// <summary>
        /// Use the local computer's certificate store.
        /// </summary>
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE,
        /// <summary>
        /// Use the current service's certificate store.
        /// </summary>
        BG_CERT_STORE_LOCATION_CURRENT_SERVICE,
        /// <summary>
        /// Use a specific service's certificate store.
        /// </summary>
        BG_CERT_STORE_LOCATION_SERVICES,
        /// <summary>
        /// Use a specific user's certificate store.
        /// </summary>
        BG_CERT_STORE_LOCATION_USERS,
        /// <summary>
        /// Use the current user's group policy certificate store. In a network setting, stores in this location are downloaded to the client computer from the Group Policy Template (GPT) during computer startup or user logon.
        /// </summary>
        BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY,
        /// <summary>
        /// Use the local computer's certificate store. In a network setting, stores in this location are downloaded to the client computer from the Group Policy Template (GPT) during computer startup or user logon.
        /// </summary>
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY,
        /// <summary>
        /// Use the enterprise certificate store. The enterprise store is shared across domains in the enterprise and downloaded from the global enterprise directory.
        /// </summary>
        BG_CERT_STORE_LOCATION_LOCAL_MACHINE_ENTERPRISE
    }
}