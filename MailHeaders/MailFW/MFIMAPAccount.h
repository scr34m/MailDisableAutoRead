//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFRemoteStoreAccount.h>

#import <Mail/IMAPAccount-Protocol.h>

@class ACAccount, ECAuthScheme, ECIMAPAccount, IMAPTaskManager, MFLibraryIMAPStore, MFMailbox, NSArray, NSDate, NSDictionary, NSError, NSLock, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface MFIMAPAccount : MFRemoteStoreAccount <IMAPAccount>
{
    NSArray *_lastKnownCapabilities;
    NSMutableSet *_namespacePrivatePrefixes;
    NSMutableSet *_namespacePublicPrefixes;
    NSMutableSet *_namespaceSharedPrefixes;
    NSString *_separatorChar;
    NSString *_serverPathPrefixWithFilesystemSeparator;
    NSString *_serverPathPrefixAsFilesystemPath;
    NSLock *_fsPrefixLock;
    NSLock *_mailboxListingLock;
    NSMutableSet *_mailboxURLsToSynchronize;
    NSMutableDictionary *_IMAPMailboxes;
    NSMutableDictionary *_IMAPQuotaRoots;
    id _allMailLock;
    MFMailbox *_allMailMailbox;
    MFMailbox *_serverDefinedArchiveMailbox;
    id _serverDefinedArchiveMailboxLock;
    MFMailbox *_serverDefinedDraftsMailbox;
    id _serverDefinedDraftsMailboxLock;
    MFMailbox *_serverDefinedJunkMailbox;
    id _serverDefinedJunkMailboxLock;
    MFMailbox *_serverDefinedSentMailbox;
    id _serverDefinedSentMailboxLock;
    MFMailbox *_serverDefinedTrashMailbox;
    id _serverDefinedTrashMailboxLock;
    id _propertyDiscoveryLock;
    BOOL _currentlySynchronizingMailboxList;
    id _synchronizeMailboxListingLock;
    NSMutableSet *_labelsBeingCleanedUp;
    BOOL _supportsQuickResynchronization;
    BOOL _lastConnectionFailed;
    BOOL _shouldIncludePrefixInPath;
    NSOperationQueue *_remoteTaskQueue;
    NSOperationQueue *_remoteFetchQueue;
    NSDictionary *_serverID;
    MFLibraryIMAPStore *_idleStore;
    double _lastMailboxListFetchTime;
}

+ (id)_mailboxNameForPathComponent:(id)arg1;
+ (id)_pathComponentForMailboxName:(id)arg1;
+ (void)_deleteQueuedMailboxes:(id)arg1;
+ (id)csAccountTypeString;
+ (id)accountTypeString;
+ (id)standardSSLPorts;
+ (id)standardPorts;
+ (id)backgroundQueue;
+ (id)invocationQueue;
@property(nonatomic) BOOL shouldIncludePrefixInPath; // @synthesize shouldIncludePrefixInPath=_shouldIncludePrefixInPath;
@property(nonatomic) BOOL lastConnectionFailed; // @synthesize lastConnectionFailed=_lastConnectionFailed;
@property double lastMailboxListFetchTime; // @synthesize lastMailboxListFetchTime=_lastMailboxListFetchTime;
@property(retain) MFLibraryIMAPStore *idleStore; // @synthesize idleStore=_idleStore;
@property BOOL supportsQuickResynchronization; // @synthesize supportsQuickResynchronization=_supportsQuickResynchronization;
@property(copy) NSDictionary *serverID; // @synthesize serverID=_serverID;
@property(readonly, nonatomic) NSOperationQueue *remoteFetchQueue; // @synthesize remoteFetchQueue=_remoteFetchQueue;
@property(readonly, nonatomic) NSOperationQueue *remoteTaskQueue; // @synthesize remoteTaskQueue=_remoteTaskQueue;
- (void).cxx_destruct;
- (void)_performDiagnostics:(id)arg1;
- (void)messageDeliveryWillBegin:(id)arg1;
- (BOOL)storesUnseenCount;
- (id)_infoForMatchingURL:(id)arg1;
- (id)URLPersistenceScheme;
- (id)mailboxForRelativePath:(id)arg1 isFilesystemPath:(BOOL)arg2 create:(BOOL)arg3;
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;
- (id)_mailboxPathPrefix:(BOOL)arg1;
- (void)syncFileSystemWithServerPathPrefix;
- (void)_setFileSystemServerPathPrefix;
- (id)_fileSystemServerPathPrefix:(BOOL)arg1;
@property(copy) NSString *serverPathPrefix;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (id)mailboxForName:(id)arg1;
- (id)nameForMailbox:(id)arg1;
- (id)_fullIMAPPathForPath:(id)arg1 relativeToMailbox:(id)arg2;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)renameMailbox:(id)arg1 newDisplayName:(id)arg2 parent:(id)arg3;
- (void)_recursivelyModifySubscriptions:(BOOL)arg1 forMailbox:(id)arg2 children:(id)arg3 withSyncHandler:(id)arg4;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (void)_waitForMailboxListingLoadToComplete;
- (void)_loadMailboxListingIntoCache:(id)arg1 parent:(id)arg2 addedMailboxes:(id)arg3 removedMailboxes:(id)arg4 updatingSourceMailbox:(BOOL)arg5;
- (void)_loadMailboxListingIntoCache:(id)arg1 parent:(id)arg2 addedMailboxes:(id)arg3 removedMailboxes:(id)arg4;
- (void)refreshMailboxListingRootedAtMailbox:(id)arg1;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 pathComponent:(id)arg3 attributes:(unsigned long long)arg4 existingMailbox:(id)arg5;
- (id)_specialMailboxWithType:(int)arg1 create:(BOOL)arg2 isLocal:(BOOL)arg3;
- (BOOL)_deleteMailbox:(id)arg1 reflectToServer:(BOOL)arg2;
- (BOOL)deleteMailbox:(id)arg1 reflectToServer:(BOOL)arg2;
- (BOOL)_askToChangePathPrefixToCreateMailbox:(id)arg1 displayName:(id)arg2 withSyncHandler:(id)arg3;
- (id)validNameForMailbox:(id)arg1 fromDisplayName:(id)arg2 error:(id *)arg3;
- (id)createMailboxWithParent:(id)arg1 displayName:(id)arg2 localizedDisplayName:(id)arg3;
- (BOOL)_createMailbox:(id)arg1 withSyncHandler:(id)arg2;
- (id)_listingForMailbox:(id)arg1 listAllChildren:(BOOL)arg2;
- (id)_recursivelyFilterMailboxList:(id)arg1 accordingToList:(id)arg2;
- (id)_namespacePrefixesForPrivate:(BOOL)arg1 public:(BOOL)arg2 shared:(BOOL)arg3;
- (id)_listingForMailbox:(id)arg1 listAllChildren:(BOOL)arg2 onlySubscribed:(BOOL)arg3;
- (void)_synchronizeMailboxListDuringMailCheck;
- (void)_updateSpecialMailboxes;
- (BOOL)_synchronizeMailboxList;
@property(readonly, nonatomic) BOOL supportsMove;
@property(readonly) BOOL supportsIDLE;
@property(readonly, copy) NSArray *lastKnownCapabilities;
- (id)separatorCharFetchIfNeeded:(BOOL)arg1;
- (void)unselectConnectionForMailbox:(id)arg1;
- (id)storeForMailbox:(id)arg1;
- (void)doCommandBlockForMailbox:(id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 description:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)stopAccountActivity;
- (void)fetchAsynchronouslyIsAuto:(BOOL)arg1;
- (BOOL)shouldFetch;
- (void)setIsOffline:(BOOL)arg1;
- (void)clearQuotaRoots;
- (id)quotaRootForName:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)_startObserving:(BOOL)arg1 IMAPMailbox:(id)arg2;
- (void)_removeIMAPMailboxWithName:(id)arg1;
- (void)_renameIMAPMailboxWithMailbox:(id)arg1 fromName:(id)arg2 toName:(id)arg3;
- (BOOL)resetSpecialMailboxes;
- (id)_serverDefinedMailboxWithAttribute:(unsigned long long)arg1;
@property(readonly) MFMailbox *serverDefinedTrashMailbox;
@property(readonly) MFMailbox *serverDefinedSentMailbox;
@property(readonly) MFMailbox *serverDefinedJunkMailbox;
@property(readonly) MFMailbox *serverDefinedDraftsMailbox;
@property(readonly) MFMailbox *serverDefinedArchiveMailbox;
- (id)_mailboxNameForLabelName:(id)arg1;
- (id)gmailLabelWithName:(id)arg1;
- (id)_addIMAPMailboxForMailbox:(id)arg1 name:(id)arg2;
- (id)IMAPMailboxForMailbox:(id)arg1 name:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)IMAPMailboxForMailboxName:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)IMAPMailboxForMailbox:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)_allegedHighestModificationSequenceDidChangeForIMAPMailbox:(id)arg1;
- (void)_unseenCount:(unsigned int)arg1 didChangeForIMAPMailbox:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)validateConnections;
- (void)_validateConnections;
- (void)releaseAllConnections;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)arg1 saveOfflineCache:(BOOL)arg2;
- (void)didConnectToServerWithServerInterface:(id)arg1;
- (void)setSeparatorChar:(id)arg1;
- (void)expungeMailboxWithName:(id)arg1 URLStringToCompact:(id)arg2 ifSelected:(BOOL)arg3;
- (void)invalidateMailboxWithName:(id)arg1 expunge:(BOOL)arg2 URLStringToCompact:(id)arg3;
- (void)handleOpenMailboxError:(id)arg1;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (void)detectAllMailMailboxWithConnection:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allBackgroundMailboxNames;
- (void)setStoreTrashOnServer:(BOOL)arg1;
- (void)setStoreSentMessagesOnServer:(BOOL)arg1;
- (void)setStoreJunkOnServer:(BOOL)arg1;
- (void)setStoreDraftsOnServer:(BOOL)arg1;
@property BOOL ignoreServerDefinedTrashMailbox;
@property BOOL ignoreServerDefinedSentMailbox;
@property BOOL ignoreServerDefinedJunkMailbox;
@property BOOL ignoreServerDefinedDraftsMailbox;
@property BOOL ignoreServerDefinedArchiveMailbox;
@property BOOL hasServerDefinedTrashMailbox;
@property BOOL hasServerDefinedSentMailbox;
@property BOOL hasServerDefinedJunkMailbox;
@property BOOL hasServerDefinedDraftsMailbox;
@property BOOL hasServerDefinedArchiveMailbox;
@property BOOL hasServerDefinedAllMailMailbox;
- (void)_clearAllPathBasedCachesAndDelete:(BOOL)arg1;
@property(readonly) BOOL allowsPartialDownloads;
- (void)didSynchronizeMailboxCachesAndFoundChanges:(BOOL)arg1;
- (void)resetNeedToSynchronizeMailboxCaches;
- (BOOL)needToSynchronizeMailboxCaches;
- (void)handleAlertResponse:(id)arg1;
- (BOOL)handleResponseCodeFromResponse:(id)arg1;
- (void)_updateIdleMailbox;
- (id)allMailMailbox;
- (id)primaryMailbox;
- (BOOL)_setChildren:(id)arg1 forMailbox:(id)arg2;
@property BOOL compactWhenClosingMailboxes;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;
- (id)mailboxPathExtension;
- (Class)storeClassForMailbox:(id)arg1;
- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;
- (id)messageActionsAfterActionID:(long long)arg1;
- (BOOL)discoverSettings;
- (BOOL)needsToDiscoverSettings;
- (void)setSupportsModificationSequences:(BOOL)arg1 forMailboxName:(id)arg2;
- (id)dataSourceForMailboxURL:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)dataSourceForMailbox:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)dataSourceForMailboxName:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)doRoutineCleanup;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (BOOL)_cleanUpMessagesInGmailLabel:(id)arg1;
- (void)cleanUpMessagesInGmailLabel:(id)arg1;
- (void)_cleanUpMessagesInGmailLabels;
- (id)_colorByMessageFromColorByMessageDigest:(id)arg1;
- (void)_migrateColorsForGmail;
@property BOOL needsGmailLabelsCleanup;
@property(readonly) BOOL shouldUseGmailLabelStoresIsSet;
@property BOOL shouldUseGmailLabelStores;
- (BOOL)needsServerMessages;
- (void)completeDeferredInitialization;
- (void)dealloc;
- (id)_newTaskManager;
- (id)init;
- (id)initWithSystemAccount:(id)arg1;
- (void)setMessageCaching:(unsigned int)arg1;
- (unsigned int)messageCaching;

// Remaining properties
@property(readonly, copy) NSString *accountTypeString;
@property BOOL allowInsecureAuthentication;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *authenticationScheme;
@property(readonly) ECIMAPAccount *baseAccount; // @dynamic baseAccount;
@property long long cachePolicy;
@property(copy) NSString *canonicalEmailAddress;
@property(readonly, copy) NSString *clientInfo;
@property BOOL configureDynamically;
@property(retain) NSError *connectionError;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSString *displayName;
@property(readonly, copy) NSArray *emailAddressStrings;
@property(readonly, copy, nonatomic) NSDate *expiryDate;
@property(copy) NSString *externalHostname;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *hostname;
@property(readonly, copy) NSString *identifier;
@property(readonly, nonatomic) BOOL isGmailAccount;
@property(readonly) BOOL isYahooAccount;
@property(readonly, copy) NSString *machineID;
@property(readonly, nonatomic, getter=isManaged) BOOL managed;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *oneTimePassword;
@property(readonly, copy) NSString *password;
@property long long portNumber;
@property(retain) ECAuthScheme *preferredAuthScheme;
@property long long securityLayerType;
@property(readonly) BOOL shouldMoveDeletedMessagesToTrash;
@property BOOL shouldUseAuthentication;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
@property(readonly) Class superclass;
@property(readonly, copy) ACAccount *systemAccount;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @dynamic taskManager;
@property(readonly, copy) NSString *username;
@property BOOL usesSSL;

@end

