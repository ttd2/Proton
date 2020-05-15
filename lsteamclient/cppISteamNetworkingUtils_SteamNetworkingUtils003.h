extern SteamNetworkingMessage_t * cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage(void *, int);
extern ESteamNetworkingAvailability cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus(void *, SteamRelayNetworkStatus_t *);
extern float cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation(void *, SteamNetworkPingLocation_t*);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations(void *, const SteamNetworkPingLocation_t*, const SteamNetworkPingLocation_t*);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost(void *, const SteamNetworkPingLocation_t*);
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString(void *, const SteamNetworkPingLocation_t*, char *, int);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString(void *, const char *, SteamNetworkPingLocation_t*);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate(void *, float);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter(void *, SteamNetworkingPOPID, SteamNetworkingPOPID *);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP(void *, SteamNetworkingPOPID);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount(void *);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList(void *, SteamNetworkingPOPID *, int);
extern SteamNetworkingMicroseconds cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp(void *);
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction(void *, ESteamNetworkingSocketsDebugOutputType, FSteamNetworkingSocketsDebugOutput);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue(void *, ESteamNetworkingConfigValue, ESteamNetworkingConfigScope, intptr_t, ESteamNetworkingConfigDataType, const void *);
extern ESteamNetworkingGetConfigValueResult cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue(void *, ESteamNetworkingConfigValue, ESteamNetworkingConfigScope, intptr_t, ESteamNetworkingConfigDataType *, void *, size_t *);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo(void *, ESteamNetworkingConfigValue, const char **, ESteamNetworkingConfigDataType *, ESteamNetworkingConfigScope *, ESteamNetworkingConfigValue *);
extern ESteamNetworkingConfigValue cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue(void *);
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString(void *, const SteamNetworkingIPAddr*, char *, size_t, bool);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString(void *, SteamNetworkingIPAddr *, const char *);
extern void cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString(void *, const SteamNetworkingIdentity*, char *, size_t);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString(void *, SteamNetworkingIdentity *, const char *);
