//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCByteStatusProgressEntry.h>

@interface MCSavingDraftProgressEntry : MCByteStatusProgressEntry
{
    BOOL _userInitiated;
}

+ (id)keyPathsAffectingValuesForShouldDisplay;
+ (id)keyPathsAffectingValuesForProgressName;
@property(nonatomic) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
- (double)finishDelay;
- (BOOL)shouldDisplay;
- (void)refreshValues;
- (id)observedProgressKeypaths;
- (id)progressSlice;
- (id)progressName;

@end

