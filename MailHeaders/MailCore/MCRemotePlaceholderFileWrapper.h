//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCPlaceholderFileWrapper.h>

@class NSURL;

@interface MCRemotePlaceholderFileWrapper : MCPlaceholderFileWrapper
{
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (unsigned long long)approximateSizeAllowingDiskIO:(BOOL)arg1;
- (id)symbolicLinkDestinationURL;
- (BOOL)isRemotelyAccessed;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1;

@end

