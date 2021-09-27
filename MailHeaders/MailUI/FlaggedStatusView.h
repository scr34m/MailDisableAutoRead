//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@class FlaggedStatusToolbarItem;

@interface FlaggedStatusView : NSSegmentedControl
{
    BOOL _flagColorToDisplay;
    FlaggedStatusToolbarItem *_toolbarItem;
}

+ (BOOL)defaultFlagColor;
+ (id)menuForFlaggedStatus;
@property(nonatomic) __weak FlaggedStatusToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
- (void).cxx_destruct;
- (void)_segmentedControlClicked:(id)arg1;
- (void)setupAccessibilityForButton:(BOOL)arg1;
@property(nonatomic) BOOL flagColorToDisplay;
- (void)_flaggedStatusViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

