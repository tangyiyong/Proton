extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUserUGCRequest(void *, AccountID_t, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, AppId_t, AppId_t, uint32);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryAllUGCRequest(void *, EUGCQuery, EUGCMatchingUGCType, AppId_t, AppId_t, uint32);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateQueryUGCDetailsRequest(void *, PublishedFileId_t *, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SendQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCResult(void *, UGCQueryHandle_t, uint32, winSteamUGCDetails_t_133b *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCPreviewURL(void *, UGCQueryHandle_t, uint32, char *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCMetadata(void *, UGCQueryHandle_t, uint32, char *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCChildren(void *, UGCQueryHandle_t, uint32, PublishedFileId_t *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCStatistic(void *, UGCQueryHandle_t, uint32, EItemStatistic, uint32 *);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCNumAdditionalPreviews(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetQueryUGCAdditionalPreview(void *, UGCQueryHandle_t, uint32, uint32, char *, uint32, bool *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_ReleaseQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddRequiredTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddExcludedTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnLongDescription(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnMetadata(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnChildren(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnAdditionalPreviews(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetReturnTotalOnly(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetAllowCachedResponse(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetCloudFileNameFilter(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetMatchAnyTag(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetSearchText(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetRankedByTrendDays(void *, UGCQueryHandle_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RequestUGCDetails(void *, PublishedFileId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_CreateItem(void *, AppId_t, EWorkshopFileType);
extern UGCUpdateHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_StartItemUpdate(void *, AppId_t, PublishedFileId_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTitle(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemDescription(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemMetadata(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemVisibility(void *, UGCUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemTags(void *, UGCUpdateHandle_t, const SteamParamStringArray_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemContent(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SetItemPreview(void *, UGCUpdateHandle_t, const char *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubmitItemUpdate(void *, UGCUpdateHandle_t, const char *);
extern EItemUpdateStatus cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemUpdateProgress(void *, UGCUpdateHandle_t, uint64 *, uint64 *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_AddItemToFavorites(void *, AppId_t, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_RemoveItemFromFavorites(void *, AppId_t, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_SubscribeItem(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_UnsubscribeItem(void *, PublishedFileId_t);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetNumSubscribedItems(void *);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetSubscribedItems(void *, PublishedFileId_t *, uint32);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemState(void *, PublishedFileId_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemInstallInfo(void *, PublishedFileId_t, uint64 *, char *, uint32, uint32 *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_GetItemDownloadInfo(void *, PublishedFileId_t, uint64 *, uint64 *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION005_DownloadItem(void *, PublishedFileId_t, bool);
