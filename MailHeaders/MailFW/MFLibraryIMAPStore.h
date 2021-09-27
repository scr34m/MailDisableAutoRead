//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFRemoteStore.h>

#import <Mail/IMAPMailboxDelegate-Protocol.h>
#import <Mail/IMAPMessageDataSource-Protocol.h>

@class EDMessageChangeManager, EDServerMessagePersistence, IMAPCommandPipeline, IMAPDownloadCache, IMAPMailbox, MFIMAPAccount, MFMailbox, NSArray, NSDate, NSMutableArray, NSString;

@interface MFLibraryIMAPStore : MFRemoteStore <IMAPMailboxDelegate, IMAPMessageDataSource>
{
    IMAPMailbox *_IMAPMailbox;
    IMAPDownloadCache *_downloadCache;
    IMAPCommandPipeline *_fetchPipeline;
    NSMutableArray *_recentlyDeletedMessageIDs;
    id _uidNextStatusLock;
    unsigned long long _numberOfAppendsOutstanding;
    id _appendCountLock;
    BOOL _supportsModificationSequences;
    BOOL _isOpenedByUser;
    BOOL _supportsCustomPermanentFlags;
    unsigned long long _totalCount;
    NSString *_mailboxName;
}

+ (id)largeDeleteLog;
@property(copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
@property(nonatomic) BOOL supportsCustomPermanentFlags; // @synthesize supportsCustomPermanentFlags=_supportsCustomPermanentFlags;
@property BOOL isOpenedByUser; // @synthesize isOpenedByUser=_isOpenedByUser;
@property BOOL supportsModificationSequences; // @synthesize supportsModificationSequences=_supportsModificationSequences;
@property unsigned long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *stateStringForDiagnostics;
- (void)updateUidValidityFromMailbox:(id)arg1;
- (void)updateComputedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)computedHighestModificationSequenceForMailbox:(id)arg1;
- (unsigned long long)allegedHighestModificationSequenceForMailbox:(id)arg1;
@property(retain) NSDate *lastSyncDate;
@property(readonly, nonatomic) MFIMAPAccount *account;
@property(readonly, copy, nonatomic) NSArray *messagesBeingRouted;
@property(readonly, nonatomic) IMAPDownloadCache *downloadCache;
@property(readonly, nonatomic) IMAPCommandPipeline *fetchPipeline;
- (void)_setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3;
- (BOOL)isSortedAscending;
- (id)sortOrder;
- (void)writeUpdatedMessageDataToDisk;
- (id)_deletedMessages;
- (id)_copyOfAllMessagesSortedByUidWithOptions:(unsigned int)arg1;
- (id)copyOfOldCachedMessagesContentsForUid:(unsigned int)arg1;
- (BOOL)hasValidCacheFileForUid:(unsigned int)arg1;
- (BOOL)hasValidCacheFileForMessage:(id)arg1;
- (id)_preferredOrderForFetchingMessageBodies:(id)arg1;
- (void)forceResync;
- (void)fixMessagesAndResetIMAPMessages;
- (BOOL)mailboxHasInconsistencies;
- (void)setComputedHighestModificationSequence:(unsigned long long)arg1;
@property(nonatomic) unsigned long long allegedHighestModificationSequence;
- (void)setUidNextStatusIfNeeded:(unsigned int)arg1;
@property(nonatomic) unsigned int uidNextStatus;
@property(nonatomic) unsigned int uidValidityStatus;
- (id)_uidIndexSetForMessages:(id)arg1;
@property(readonly) EDMessageChangeManager *messageChangeManager;
@property(readonly) EDServerMessagePersistence *serverMessagePersistence;
- (id)messagesWithRemoteIDs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *duplicateRemoteIDs;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyIncompleteMessages;
@property(readonly, nonatomic) BOOL canSetMessageColors;
- (void)setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)messagesForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(BOOL)arg4 options:(unsigned int)arg5;
- (void)compactMailbox:(id)arg1;
@property(readonly, nonatomic) unsigned long long serverMessageCount;
- (unsigned long long)totalCountAndUnseenCount:(unsigned long long *)arg1 adjustedUnreadCount:(unsigned long long *)arg2;
@property(readonly, nonatomic) unsigned long long totalCountOfMessages;
@property(readonly, nonatomic) unsigned int maximumUID;
- (id)messageForMessageID:(id)arg1;
- (id)colorForMessage:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4 serverInterface:(id)arg5;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_waitForDataFromDownload:(id)arg1 uid:(unsigned int)arg2;
- (id)fetchAndCacheBodyDataForMessages:(id)arg1 withServerInterface:(id)arg2;
- (id)_dataForMessage:(id)arg1 readHeadersOnly:(BOOL)arg2;
- (id)messagesWithRowIDs:(id)arg1;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2;
- (id)messageWithDefaultLoadOptionsAndRowID:(long long)arg1;
- (void)undeleteMessagesWithDetails:(id)arg1;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (BOOL)_isAppleOriCloudAccount;
- (id)flagChangeFromLocalFlags:(id)arg1 toServerFlags:(id)arg2;
- (BOOL)allowsOverwrite;
- (BOOL)allowsAppend;
- (BOOL)shouldSendUserNotificationForMessage:(id)arg1;
- (void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (void)doCompact;
@property(readonly, nonatomic) BOOL canCompact;
@property(readonly, nonatomic) MFMailbox *mailbox;
- (BOOL)canRebuild;
- (void)doRoutineCleanup;
- (void)fetchSynchronouslyForKnownChanges;
- (void)fetchSynchronously;
- (void)checkNewMail;
- (void)_fetchForCheckingNewMail:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isAllMailMailbox;
@property(readonly, nonatomic) BOOL isInbox;
- (BOOL)shouldCallCompactWhenClosing;
- (void)invalidateSyncEngine;
- (void)_invalidate;
- (void)asynchronousCopyOfAllMessagesWithOptions:(id)arg1;
- (void)openSynchronouslyWithoutUserInteraction;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (void)_openSynchronouslyUpdatingMetadata:(BOOL)arg1 withOptions:(unsigned long long)arg2;
- (void)openAsynchronously;
@property(readonly) BOOL isReadOnly;
@property(readonly, nonatomic) unsigned int permanentFlags;
- (BOOL)_isSynchronizing;
- (BOOL)_isSynchronized;
- (id)_IMAPMailbox;
- (void)dealloc;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)objectSpecifierForMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isTrash;
@property(readonly, nonatomic) long long mailboxID;
@property(readonly) Class superclass;

@end
