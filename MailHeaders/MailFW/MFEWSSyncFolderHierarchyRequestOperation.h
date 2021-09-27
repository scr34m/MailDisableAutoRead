//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSSyncFolderHierarchyResponseOperation, NSString;

@interface MFEWSSyncFolderHierarchyRequestOperation : MFEWSRequestOperation
{
    NSString *_syncState;
}

@property(readonly, copy, nonatomic) NSString *syncState; // @synthesize syncState=_syncState;
- (void).cxx_destruct;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
@property(retain, nonatomic) MFEWSSyncFolderHierarchyResponseOperation *responseOperation;
- (id)prepareRequest;
- (id)activityString;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithSyncState:(id)arg1 createBlock:(CDUnknownBlockType)arg2 updateBlock:(CDUnknownBlockType)arg3 deleteBlock:(CDUnknownBlockType)arg4 gateway:(id)arg5;

@end

