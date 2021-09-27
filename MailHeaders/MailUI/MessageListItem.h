//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMessage, MFMessageThread;

@interface MessageListItem : NSObject
{
    MCMessage *_message;
    MFMessageThread *_messageThread;
    long long _type;
    long long _providerType;
}

+ (id)messagesFromMessageListItems:(id)arg1;
+ (id)messageListItemForMessageOrThread:(id)arg1 providerType:(long long)arg2;
+ (id)searchProgressMessageListItem;
+ (id)topHitsHeaderMessageListItem;
+ (id)sortViewHeaderMessageListItem;
@property(readonly, nonatomic) long long providerType; // @synthesize providerType=_providerType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) MFMessageThread *messageThread; // @synthesize messageThread=_messageThread;
@property(readonly, nonatomic) MCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) MCMessage *snippetMessage;
@property(readonly, nonatomic) BOOL isTopHit;
@property(readonly, nonatomic) BOOL isMessageOrThread;
- (id)initWithType:(long long)arg1 message:(id)arg2 providerType:(long long)arg3;

@end

