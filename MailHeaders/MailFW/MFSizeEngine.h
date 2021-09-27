//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/MCActivityTarget-Protocol.h>

@class MCActivityMonitor, MCQuotaUsage, MFMailAccount, NSString;

@interface MFSizeEngine : NSObject <MCActivityTarget>
{
    BOOL _isActive;
    MFMailAccount *_account;
    MCActivityMonitor *_monitor;
    long long _monitorAccessKey;
    MCQuotaUsage *_totalUsage;
}

@property(readonly, nonatomic) MCQuotaUsage *totalUsage; // @synthesize totalUsage=_totalUsage;
@property(nonatomic) long long monitorAccessKey; // @synthesize monitorAccessKey=_monitorAccessKey;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(readonly, nonatomic) MFMailAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldStartWorkerThread;
- (void)_workerThreadFinished:(id)arg1;
- (void)_startWorkerThreadIfNeeded;
- (void)stop;
- (void)start;
- (void)cancel;
- (void)refresh;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

