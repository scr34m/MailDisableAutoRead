//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasicComposeContext.h"

@interface _CompletionComposeContext : BasicComposeContext
{
    CDUnknownBlockType _loadCompletedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType loadCompletedHandler; // @synthesize loadCompletedHandler=_loadCompletedHandler;
- (void).cxx_destruct;
- (void)presentComposeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadCompleted:(id)arg1;

@end

