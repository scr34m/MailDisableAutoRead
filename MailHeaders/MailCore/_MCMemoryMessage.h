//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCMessage.h>

@class MCMemoryDataSource;

@interface _MCMemoryMessage : MCMessage
{
    MCMemoryDataSource *_dataSource;
}

- (void).cxx_destruct;
- (BOOL)isCompacted;
- (id)messageDataFetchIfNotAvailable:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)primitiveDataSource;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)init;
- (id)initWithStore:(id)arg1;

@end

