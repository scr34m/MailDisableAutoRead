//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCProgressEntry.h>

@class NSArray;

@interface MCConnectingProgressEntry : MCProgressEntry
{
    NSArray *_connectingAccountNames;
}

+ (id)keyPathsForValuesAffectingStatusText;
@property(copy, nonatomic) NSArray *connectingAccountNames; // @synthesize connectingAccountNames=_connectingAccountNames;
- (void).cxx_destruct;
- (BOOL)indeterminate;
- (id)statusText;
- (id)progressSlice;
- (id)progressName;
- (void)refreshValues;
- (id)observedProgressKeypaths;

@end
