//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCTaskHandlerOperation.h>

@class NSArray;
@protocol MFEWSRetrievePersistedFolderDataDelegate;

@interface MFEWSRetrievePersistedFolderDataOperation : MCTaskHandlerOperation
{
    id <MFEWSRetrievePersistedFolderDataDelegate> _delegate;
    NSArray *_mailboxURLs;
}

@property(readonly, copy, nonatomic) NSArray *mailboxURLs; // @synthesize mailboxURLs=_mailboxURLs;
@property(nonatomic) __weak id <MFEWSRetrievePersistedFolderDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)init;
- (id)initWithMailboxURLs:(id)arg1;

@end
