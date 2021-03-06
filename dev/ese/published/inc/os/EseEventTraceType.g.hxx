// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.


typedef struct _EseTraceBaseIdNative
{
} EseTraceBaseIdNative;

typedef struct _EseBFNative
{
} EseBFNative;

typedef struct _EseBlockNative
{
} EseBlockNative;

typedef struct _EseCacheNewPageNative
{
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       LatchFlags;
    DWORD       objid;
    DWORD       PageFlags;
    DWORD       UserId;
    BYTE        OperationId;
    BYTE        OperationType;
    BYTE        ClientType;
    BYTE        Flags;
    DWORD       CorrelationId;
    BYTE        Iorp;
    BYTE        Iors;
    BYTE        Iort;
    BYTE        Ioru;
    BYTE        Iorf;
    BYTE        ParentObjectClass;
    QWORD       dbtimeDirtied;
    USHORT      itagMicFree;
    USHORT      cbFree;
} EseCacheNewPageNative;

typedef struct _EseCacheReadPageNative
{
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       LatchFlags;
    DWORD       objid;
    DWORD       PageFlags;
    DWORD       UserId;
    BYTE        OperationId;
    BYTE        OperationType;
    BYTE        ClientType;
    BYTE        Flags;
    DWORD       CorrelationId;
    BYTE        Iorp;
    BYTE        Iors;
    BYTE        Iort;
    BYTE        Ioru;
    BYTE        Iorf;
    BYTE        ParentObjectClass;
    QWORD       dbtimeDirtied;
    USHORT      itagMicFree;
    USHORT      cbFree;
} EseCacheReadPageNative;

typedef struct _EseCachePrereadPageNative
{
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       UserId;
    BYTE        OperationId;
    BYTE        OperationType;
    BYTE        ClientType;
    BYTE        Flags;
    DWORD       CorrelationId;
    BYTE        Iorp;
    BYTE        Iors;
    BYTE        Iort;
    BYTE        Ioru;
    BYTE        Iorf;
    BYTE        ParentObjectClass;
} EseCachePrereadPageNative;

typedef struct _EseCacheWritePageNative
{
    DWORD       tick;
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       objid;
    DWORD       PageFlags;
    DWORD       DirtyLevel;
    DWORD       UserId;
    BYTE        OperationId;
    BYTE        OperationType;
    BYTE        ClientType;
    BYTE        Flags;
    DWORD       CorrelationId;
    BYTE        Iorp;
    BYTE        Iors;
    BYTE        Iort;
    BYTE        Ioru;
    BYTE        Iorf;
    BYTE        ParentObjectClass;
} EseCacheWritePageNative;

typedef struct _EseCacheEvictPageNative
{
    DWORD       tick;
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       fCurrentVersion;
    INT     errBF;
    DWORD       bfef;
    DWORD       pctPriority;
} EseCacheEvictPageNative;

typedef struct _EseCacheRequestPageNative
{
    DWORD       tick;
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       bflf;
    DWORD       objid;
    DWORD       PageFlags;
    DWORD       bflt;
    DWORD       pctPriority;
    DWORD       bfrtf;
    BYTE        ClientType;
} EseCacheRequestPageNative;

typedef struct _EseLatchPageDeprecatedNative
{
} EseLatchPageDeprecatedNative;

typedef struct _EseCacheDirtyPageNative
{
    DWORD       tick;
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       objid;
    DWORD       PageFlags;
    DWORD       DirtyLevel;
    QWORD       LgposModify;
    DWORD       UserId;
    BYTE        OperationId;
    BYTE        OperationType;
    BYTE        ClientType;
    BYTE        Flags;
    DWORD       CorrelationId;
    BYTE        Iorp;
    BYTE        Iors;
    BYTE        Iort;
    BYTE        Ioru;
    BYTE        Iorf;
    BYTE        ParentObjectClass;
} EseCacheDirtyPageNative;

typedef struct _EseTransactionBeginNative
{
    const void *        SessionNumber;
    const void *        TransactionNumber;
    BYTE        TransactionLevel;
} EseTransactionBeginNative;

typedef struct _EseTransactionCommitNative
{
    const void *        SessionNumber;
    const void *        TransactionNumber;
    BYTE        TransactionLevel;
} EseTransactionCommitNative;

typedef struct _EseTransactionRollbackNative
{
    const void *        SessionNumber;
    const void *        TransactionNumber;
    BYTE        TransactionLevel;
} EseTransactionRollbackNative;

typedef struct _EseSpaceAllocExtNative
{
    DWORD       ifmp;
    DWORD       pgnoFDP;
    DWORD       pgnoFirst;
    DWORD       cpg;
    DWORD       objidFDP;
    BYTE        tce;
} EseSpaceAllocExtNative;

typedef struct _EseSpaceFreeExtNative
{
    DWORD       ifmp;
    DWORD       pgnoFDP;
    DWORD       pgnoFirst;
    DWORD       cpg;
    DWORD       objidFDP;
    BYTE        tce;
} EseSpaceFreeExtNative;

typedef struct _EseSpaceAllocPageNative
{
    DWORD       ifmp;
    DWORD       pgnoFDP;
    DWORD       pgnoAlloc;
    DWORD       objidFDP;
    BYTE        tce;
} EseSpaceAllocPageNative;

typedef struct _EseSpaceFreePageNative
{
    DWORD       ifmp;
    DWORD       pgnoFDP;
    DWORD       pgnoFree;
    DWORD       objidFDP;
    BYTE        tce;
} EseSpaceFreePageNative;

typedef struct _EseIorunEnqueueNative
{
    QWORD       iFile;
    QWORD       ibOffset;
    DWORD       cbData;
    DWORD       tidAlloc;
    DWORD       fHeapA;
    DWORD       fWrite;
    DWORD       EngineFileType;
    QWORD       EngineFileId;
    DWORD       cusecEnqueueLatency;
} EseIorunEnqueueNative;

typedef struct _EseIorunDequeueNative
{
    QWORD       iFile;
    QWORD       ibOffset;
    DWORD       cbData;
    DWORD       tidAlloc;
    DWORD       fHeapA;
    DWORD       fWrite;
    DWORD       Iorp;
    DWORD       Iors;
    DWORD       Ioru;
    DWORD       Iorf;
    DWORD       grbitQos;
    QWORD       cmsecTimeInQueue;
    DWORD       EngineFileType;
    QWORD       EngineFileId;
    QWORD       cDispatchPass;
    USHORT      cIorunCombined;
    DWORD       cusecDequeueLatency;
} EseIorunDequeueNative;

typedef struct _EseIOCompletionNative
{
    QWORD       iFile;
    DWORD       fMultiIor;
    BYTE        fWrite;
    DWORD       UserId;
    BYTE        OperationId;
    BYTE        OperationType;
    BYTE        ClientType;
    BYTE        Flags;
    DWORD       CorrelationId;
    BYTE        Iorp;
    BYTE        Iors;
    BYTE        Iort;
    BYTE        Ioru;
    BYTE        Iorf;
    BYTE        ParentObjectClass;
    QWORD       ibOffset;
    DWORD       cbTransfer;
    DWORD       error;
    DWORD       qosHighestFirst;
    QWORD       cmsecIOElapsed;
    DWORD       dtickQueueDelay;
    DWORD       tidAlloc;
    DWORD       EngineFileType;
    QWORD       EngineFileId;
    DWORD       fmfFile;
    DWORD       DiskNumber;
    DWORD       dwEngineObjid;
    QWORD       qosIOComplete;
} EseIOCompletionNative;

typedef struct _EseLogStallNative
{
} EseLogStallNative;

typedef struct _EseLogWriteNative
{
    INT     lgenData;
    DWORD       ibLogData;
    DWORD       cbLogData;
} EseLogWriteNative;

typedef struct _EseEventLogInfoNative
{
    PCWSTR      szTrace;
} EseEventLogInfoNative;

typedef struct _EseEventLogWarnNative
{
    PCWSTR      szTrace;
} EseEventLogWarnNative;

typedef struct _EseEventLogErrorNative
{
    PCWSTR      szTrace;
} EseEventLogErrorNative;

typedef struct _EseTimerQueueScheduleDeprecatedNative
{
} EseTimerQueueScheduleDeprecatedNative;

typedef struct _EseTimerQueueRunDeprecatedNative
{
} EseTimerQueueRunDeprecatedNative;

typedef struct _EseTimerQueueCancelDeprecatedNative
{
} EseTimerQueueCancelDeprecatedNative;

typedef struct _EseTimerTaskScheduleNative
{
    const void *        posttTimerHandle;
    const void *        pfnTask;
    const void *        pvTaskGroupContext;
    const void *        pvRuntimeContext;
    DWORD       dtickMinDelay;
    DWORD       dtickSlopDelay;
} EseTimerTaskScheduleNative;

typedef struct _EseTimerTaskRunNative
{
    const void *        posttTimerHandle;
    const void *        pfnTask;
    const void *        pvTaskGroupContext;
    const void *        pvRuntimeContext;
    QWORD       cRuns;
} EseTimerTaskRunNative;

typedef struct _EseTimerTaskCancelNative
{
    const void *        posttTimerHandle;
    const void *        pfnTask;
    const void *        pvTaskGroupContext;
} EseTimerTaskCancelNative;

typedef struct _EseTaskManagerPostNative
{
    const void *        ptm;
    const void *        pfnCompletion;
    DWORD       dwCompletionKey1;
    const void *        dwCompletionKey2;
} EseTaskManagerPostNative;

typedef struct _EseTaskManagerRunNative
{
    const void *        ptm;
    const void *        pfnCompletion;
    DWORD       dwCompletionKey1;
    const void *        dwCompletionKey2;
    DWORD       gle;
    const void *        dwThreadContext;
} EseTaskManagerRunNative;

typedef struct _EseGPTaskManagerPostNative
{
    const void *        pgptm;
    const void *        pfnCompletion;
    const void *        pvParam;
    const void *        pTaskInfo;
} EseGPTaskManagerPostNative;

typedef struct _EseGPTaskManagerRunNative
{
    const void *        pgptm;
    const void *        pfnCompletion;
    const void *        pvParam;
    const void *        pTaskInfo;
} EseGPTaskManagerRunNative;

typedef struct _EseTestMarkerNative
{
    QWORD       qwMarkerID;
    PCSTR       szAnnotation;
} EseTestMarkerNative;

typedef struct _EseThreadCreateNative
{
    const void *        Thread;
    const void *        pfnStart;
    const void *        dwParam;
} EseThreadCreateNative;

typedef struct _EseThreadStartNative
{
    const void *        Thread;
    const void *        pfnStart;
    const void *        dwParam;
} EseThreadStartNative;

typedef struct _EseCacheVersionPageNative
{
    DWORD       ifmp;
    DWORD       pgno;
} EseCacheVersionPageNative;

typedef struct _EseCacheVersionCopyPageNative
{
    DWORD       ifmp;
    DWORD       pgno;
} EseCacheVersionCopyPageNative;

typedef struct _EseCacheResizeNative
{
    __int64     cbfCacheAddressableInitial;
    __int64     cbfCacheSizeInitial;
    __int64     cbfCacheAddressableFinal;
    __int64     cbfCacheSizeFinal;
} EseCacheResizeNative;

typedef struct _EseCacheLimitResizeNative
{
    __int64     cbfCacheSizeLimitInitial;
    __int64     cbfCacheSizeLimitFinal;
} EseCacheLimitResizeNative;

typedef struct _EseCacheScavengeProgressNative
{
    __int64     iRun;
    INT     cbfVisited;
    INT     cbfCacheSize;
    INT     cbfCacheTarget;
    INT     cbfCacheSizeStartShrink;
    DWORD       dtickShrinkDuration;
    INT     cbfAvail;
    INT     cbfAvailPoolLow;
    INT     cbfAvailPoolHigh;
    INT     cbfFlushPending;
    INT     cbfFlushPendingSlow;
    INT     cbfFlushPendingHung;
    INT     cbfOutOfMemory;
    INT     cbfPermanentErrs;
    INT     eStopReason;
    INT     errRun;
} EseCacheScavengeProgressNative;

typedef struct _EseApiCall_StartNative
{
    DWORD       opApi;
} EseApiCall_StartNative;

typedef struct _EseApiCall_StopNative
{
    DWORD       opApi;
    INT     err;
} EseApiCall_StopNative;

typedef struct _EseResMgrInitNative
{
    DWORD       tick;
    INT     K;
    double      csecCorrelatedTouch;
    double      csecTimeout;
    double      csecUncertainty;
    double      dblHashLoadFactor;
    double      dblHashUniformity;
    double      dblSpeedSizeTradeoff;
} EseResMgrInitNative;

typedef struct _EseResMgrTermNative
{
    DWORD       tick;
} EseResMgrTermNative;

typedef struct _EseCacheCachePageNative
{
    DWORD       tick;
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       bflf;
    DWORD       bflt;
    DWORD       pctPriority;
    DWORD       bfrtf;
    BYTE        ClientType;
} EseCacheCachePageNative;

typedef struct _EseMarkPageAsSuperColdNative
{
    DWORD       tick;
    DWORD       ifmp;
    DWORD       pgno;
} EseMarkPageAsSuperColdNative;

typedef struct _EseCacheMissLatencyNative
{
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       dwUserId;
    BYTE        bOperationId;
    BYTE        bOperationType;
    BYTE        bClientType;
    BYTE        bFlags;
    DWORD       dwCorrelationId;
    BYTE        iorp;
    BYTE        iors;
    BYTE        iort;
    BYTE        ioru;
    BYTE        iorf;
    BYTE        tce;
    QWORD       usecsWait;
    BYTE        bftcmr;
    BYTE        bUserPriorityTag;
} EseCacheMissLatencyNative;

typedef struct _EseBTreePrereadPageRequestNative
{
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       dwUserId;
    BYTE        bOperationId;
    BYTE        bOperationType;
    BYTE        bClientType;
    BYTE        bFlags;
    DWORD       dwCorrelationId;
    BYTE        iorp;
    BYTE        iors;
    BYTE        iort;
    BYTE        ioru;
    BYTE        iorf;
    BYTE        tce;
    BYTE        fOpFlags;
} EseBTreePrereadPageRequestNative;

typedef struct _EseDiskFlushFileBuffersNative
{
    DWORD       Disk;
    PCWSTR      wszFileName;
    DWORD       iofr;
    QWORD       cioreqFileFlushing;
    QWORD       usFfb;
    DWORD       error;
} EseDiskFlushFileBuffersNative;

typedef struct _EseDiskFlushFileBuffersBeginNative
{
    DWORD       dwDisk;
    QWORD       hFile;
    DWORD       iofr;
} EseDiskFlushFileBuffersBeginNative;

typedef struct _EseCacheFirstDirtyPageNative
{
    DWORD       tick;
    DWORD       ifmp;
    DWORD       pgno;
    DWORD       objid;
    DWORD       fFlags;
    DWORD       bfdfNew;
    QWORD       lgposModify;
    DWORD       dwUserId;
    BYTE        bOperationId;
    BYTE        bOperationType;
    BYTE        bClientType;
    BYTE        bFlags;
    DWORD       dwCorrelationId;
    BYTE        iorp;
    BYTE        iors;
    BYTE        iort;
    BYTE        ioru;
    BYTE        iorf;
    BYTE        tce;
} EseCacheFirstDirtyPageNative;

typedef struct _EseSysStationIdNative
{
    BYTE        tsidr;
    DWORD       dwImageVerMajor;
    DWORD       dwImageVerMinor;
    DWORD       dwImageBuildMajor;
    DWORD       dwImageBuildMinor;
    PCWSTR      wszDisplayName;
} EseSysStationIdNative;

typedef struct _EseInstStationIdNative
{
    BYTE        tsidr;
    DWORD       iInstance;
    BYTE        perfstatusEvent;
    PCWSTR      wszInstanceName;
    PCWSTR      wszDisplayName;
} EseInstStationIdNative;

typedef struct _EseFmpStationIdNative
{
    BYTE        tsidr;
    DWORD       ifmp;
    DWORD       iInstance;
    BYTE        dbid;
    PCWSTR      wszDatabaseName;
} EseFmpStationIdNative;

typedef struct _EseDiskStationIdNative
{
    BYTE        tsidr;
    DWORD       dwDiskNumber;
    PCWSTR      wszDiskPathId;
    PCSTR       szDiskModel;
    PCSTR       szDiskFirmwareRev;
    PCSTR       szDiskSerialNumber;
} EseDiskStationIdNative;

typedef struct _EseFileStationIdNative
{
    BYTE        tsidr;
    QWORD       hFile;
    DWORD       dwDiskNumber;
    DWORD       dwEngineFileType;
    QWORD       qwEngineFileId;
    DWORD       fmf;
    QWORD       cbFileSize;
    PCWSTR      wszAbsPath;
} EseFileStationIdNative;

typedef struct _EseIsamDbfilehdrInfoNative
{
    BYTE        tsidr;
    DWORD       ifmp;
    DWORD       filetype;
    DWORD       ulMagic;
    DWORD       ulChecksum;
    DWORD       cbPageSize;
    DWORD       ulDbFlags;
    const BYTE *        psignDb;
} EseIsamDbfilehdrInfoNative;

typedef struct _EseDiskOsDiskCacheInfoNative
{
    BYTE        tsidr;
    const BYTE *        posdci;
} EseDiskOsDiskCacheInfoNative;

typedef struct _EseDiskOsStorageWriteCachePropNative
{
    BYTE        tsidr;
    const BYTE *        posswcp;
} EseDiskOsStorageWriteCachePropNative;

typedef struct _EseDiskOsDeviceSeekPenaltyDescNative
{
    BYTE        tsidr;
    const BYTE *        posdspd;
} EseDiskOsDeviceSeekPenaltyDescNative;

typedef struct _EseDirtyPage2DeprecatedNative
{
} EseDirtyPage2DeprecatedNative;

typedef struct _EseIOCompletion2Native
{
    PCWSTR      wszFilename;
    DWORD       fMultiIor;
    BYTE        fWrite;
    DWORD       dwUserId;
    BYTE        bOperationId;
    BYTE        bOperationType;
    BYTE        bClientType;
    BYTE        bFlags;
    DWORD       dwCorrelationId;
    BYTE        iorp;
    BYTE        iors;
    BYTE        iort;
    BYTE        ioru;
    BYTE        iorf;
    BYTE        tce;
    PCSTR       szClientComponent;
    PCSTR       szClientAction;
    PCSTR       szClientActionContext;
    const GUID *        guidActivityId;
    QWORD       ibOffset;
    DWORD       cbTransfer;
    DWORD       dwError;
    DWORD       qosHighestFirst;
    QWORD       cmsecIOElapsed;
    DWORD       dtickQueueDelay;
    DWORD       tidAlloc;
    DWORD       dwEngineFileType;
    QWORD       dwEngineFileId;
    DWORD       fmfFile;
    DWORD       dwDiskNumber;
    DWORD       dwEngineObjid;
} EseIOCompletion2Native;

typedef struct _EseFCBPurgeFailureNative
{
    DWORD       iInstance;
    BYTE        grbitPurgeFlags;
    BYTE        fcbpfr;
    BYTE        tce;
} EseFCBPurgeFailureNative;

typedef struct _EseIOLatencySpikeNoticeNative
{
    DWORD       dwDiskNumber;
    DWORD       dtickSpikeLength;
} EseIOLatencySpikeNoticeNative;

typedef struct _EseIOCompletion2SessNative
{
    PCWSTR      wszFilename;
    DWORD       fMultiIor;
    BYTE        fWrite;
    DWORD       dwUserId;
    BYTE        bOperationId;
    BYTE        bOperationType;
    BYTE        bClientType;
    BYTE        bFlags;
    DWORD       dwCorrelationId;
    BYTE        iorp;
    BYTE        iors;
    BYTE        iort;
    BYTE        ioru;
    BYTE        iorf;
    BYTE        tce;
    PCSTR       szClientComponent;
    PCSTR       szClientAction;
    PCSTR       szClientActionContext;
    const GUID *        guidActivityId;
    QWORD       ibOffset;
    DWORD       cbTransfer;
    DWORD       dwError;
    DWORD       qosHighestFirst;
    QWORD       cmsecIOElapsed;
    DWORD       dtickQueueDelay;
    DWORD       tidAlloc;
    DWORD       dwEngineFileType;
    QWORD       dwEngineFileId;
    DWORD       fmfFile;
    DWORD       dwDiskNumber;
    DWORD       dwEngineObjid;
} EseIOCompletion2SessNative;

typedef struct _EseIOIssueThreadPostNative
{
    const void *        p_osf;
    DWORD       cioDiskEnqueued;
} EseIOIssueThreadPostNative;

typedef struct _EseIOIssueThreadPostedNative
{
    const void *        p_osf;
    DWORD       cDispatchAttempts;
    QWORD       usPosted;
} EseIOIssueThreadPostedNative;

typedef struct _EseIOThreadIssueStartNative
{
} EseIOThreadIssueStartNative;

typedef struct _EseIOThreadIssuedDiskNative
{
    DWORD       dwDiskId;
    BYTE        fFromCompletion;
    __int64     ipass;
    INT     err;
    DWORD       cioProcessed;
    QWORD       usRuntime;
} EseIOThreadIssuedDiskNative;

typedef struct _EseIOThreadIssueProcessedIONative
{
    INT     err;
    DWORD       cDisksProcessed;
    QWORD       usRuntime;
} EseIOThreadIssueProcessedIONative;

typedef struct _EseIOIoreqCompletionNative
{
    BYTE        fWrite;
    QWORD       iFile;
    QWORD       ibOffset;
    DWORD       cbData;
    DWORD       dwDiskNumber;
    DWORD       tidAlloc;
    QWORD       qos;
    DWORD       iIoreq;
    DWORD       err;
    QWORD       usCompletionDelay;
} EseIOIoreqCompletionNative;

typedef struct _EseCacheMemoryUsageNative
{
    PCWSTR      wszFilename;
    BYTE        tce;
    DWORD       dwEngineFileType;
    QWORD       dwEngineFileId;
    QWORD       cbMemory;
    DWORD       cmsecReferenceIntervalMax;
} EseCacheMemoryUsageNative;

typedef struct _EseCacheSetLgposModifyNative
{
    DWORD       tick;
    DWORD       ifmp;
    DWORD       pgno;
    QWORD       lgposModify;
} EseCacheSetLgposModifyNative;

