//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCProgressEntry.h>

@interface MCByteStatusProgressEntry : MCProgressEntry
{
    long long _totalBytes;
}

+ (id)keyPathsForValuesAffectingStatusText;
@property(nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
- (void)refreshValues;
- (id)observedProgressKeyPaths;
- (BOOL)indeterminate;
- (id)statusText;

@end

