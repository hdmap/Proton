extern uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats(void *, CGameID);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName(void *, CGameID, uint32);
extern ESteamUserStatType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType(void *, CGameID, const char *);
extern uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements(void *, CGameID);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName(void *, CGameID, uint32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats(void *, CGameID);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat(void *, CGameID, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2(void *, CGameID, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat(void *, CGameID, const char *, int32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2(void *, CGameID, const char *, float);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat(void *, CGameID, const char *, float, double);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement(void *, CGameID, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement(void *, CGameID, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement(void *, CGameID, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats(void *, CGameID);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon(void *, CGameID, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute(void *, CGameID, const char *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress(void *, CGameID, const char *, uint32, uint32);
