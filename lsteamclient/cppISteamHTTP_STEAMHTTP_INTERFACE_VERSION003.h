extern HTTPRequestHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest(void *, EHTTPMethod, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue(void *, HTTPRequestHandle, uint64);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout(void *, HTTPRequestHandle, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue(void *, HTTPRequestHandle, const char *, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter(void *, HTTPRequestHandle, const char *, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest(void *, HTTPRequestHandle, SteamAPICall_t *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse(void *, HTTPRequestHandle, SteamAPICall_t *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize(void *, HTTPRequestHandle, const char *, uint32 *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue(void *, HTTPRequestHandle, const char *, uint8 *, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize(void *, HTTPRequestHandle, uint32 *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData(void *, HTTPRequestHandle, uint8 *, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData(void *, HTTPRequestHandle, uint32, uint8 *, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct(void *, HTTPRequestHandle, float *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody(void *, HTTPRequestHandle, const char *, uint8 *, uint32);
extern HTTPCookieContainerHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer(void *, bool);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer(void *, HTTPCookieContainerHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie(void *, HTTPCookieContainerHandle, const char *, const char *, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer(void *, HTTPRequestHandle, HTTPCookieContainerHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo(void *, HTTPRequestHandle, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate(void *, HTTPRequestHandle, bool);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS(void *, HTTPRequestHandle, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut(void *, HTTPRequestHandle, bool *);
