//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import "NSScrollViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString;
@protocol MailTableViewDelegate;

@interface MailTableView : NSTableView <NSScrollViewDelegate>
{
    BOOL _keyEventHandled;
    BOOL _delegateProvidesDragImage;
    BOOL _delegateDoesCommandBySelector;
    BOOL _delegateDragWillEndOperation;
    BOOL _delegateDraggedImageMovedTo;
    BOOL _delegateRespondsToWillDrawRowsInRange;
    BOOL _delegateApprovesScrolling;
    BOOL _delegateRespondsToMouseDown;
    BOOL _delegateRespondsToWillMoveToWindow;
    BOOL _delegateRespondsToDidMoveToWindow;
    BOOL _delegateRespondsToWillStartLiveResize;
    BOOL _delegateRespondsToDidEndLiveResize;
    BOOL _delegateRespondsToDidBecomeFirstResponder;
    BOOL _delegateRespondsToDidResignFirstResponder;
    BOOL _delegateRespondsToUserDidScrollInTableView;
    BOOL _delegateRespondsToPrepareContentInRange;
    BOOL _delegateRespondsToAccessibilityUILinkedViewsForMailTableView;
    BOOL _delegateRespondsToAccessibilityRowHeaderUIElements;
    BOOL _delegateRespondsToValidRequestorForSendTypeReturnType;
    BOOL _didLazyLoadMenu;
    BOOL _delegateRespondsToFloatingHeaderHeight;
    NSLayoutConstraint *_widthConstraint;
}

@property(nonatomic) BOOL delegateRespondsToFloatingHeaderHeight; // @synthesize delegateRespondsToFloatingHeaderHeight=_delegateRespondsToFloatingHeaderHeight;
@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
@property(nonatomic) BOOL delegateRespondsToValidRequestorForSendTypeReturnType; // @synthesize delegateRespondsToValidRequestorForSendTypeReturnType=_delegateRespondsToValidRequestorForSendTypeReturnType;
@property(nonatomic) BOOL delegateRespondsToAccessibilityRowHeaderUIElements; // @synthesize delegateRespondsToAccessibilityRowHeaderUIElements=_delegateRespondsToAccessibilityRowHeaderUIElements;
@property(nonatomic) BOOL delegateRespondsToAccessibilityUILinkedViewsForMailTableView; // @synthesize delegateRespondsToAccessibilityUILinkedViewsForMailTableView=_delegateRespondsToAccessibilityUILinkedViewsForMailTableView;
@property(nonatomic) BOOL delegateRespondsToPrepareContentInRange; // @synthesize delegateRespondsToPrepareContentInRange=_delegateRespondsToPrepareContentInRange;
@property(nonatomic) BOOL delegateRespondsToUserDidScrollInTableView; // @synthesize delegateRespondsToUserDidScrollInTableView=_delegateRespondsToUserDidScrollInTableView;
@property(nonatomic) BOOL delegateRespondsToDidResignFirstResponder; // @synthesize delegateRespondsToDidResignFirstResponder=_delegateRespondsToDidResignFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidBecomeFirstResponder; // @synthesize delegateRespondsToDidBecomeFirstResponder=_delegateRespondsToDidBecomeFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidEndLiveResize; // @synthesize delegateRespondsToDidEndLiveResize=_delegateRespondsToDidEndLiveResize;
@property(nonatomic) BOOL delegateRespondsToWillStartLiveResize; // @synthesize delegateRespondsToWillStartLiveResize=_delegateRespondsToWillStartLiveResize;
@property(nonatomic) BOOL delegateRespondsToDidMoveToWindow; // @synthesize delegateRespondsToDidMoveToWindow=_delegateRespondsToDidMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToWillMoveToWindow; // @synthesize delegateRespondsToWillMoveToWindow=_delegateRespondsToWillMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToMouseDown; // @synthesize delegateRespondsToMouseDown=_delegateRespondsToMouseDown;
@property(nonatomic) BOOL delegateApprovesScrolling; // @synthesize delegateApprovesScrolling=_delegateApprovesScrolling;
@property(nonatomic) BOOL delegateRespondsToWillDrawRowsInRange; // @synthesize delegateRespondsToWillDrawRowsInRange=_delegateRespondsToWillDrawRowsInRange;
@property(nonatomic) BOOL delegateDraggedImageMovedTo; // @synthesize delegateDraggedImageMovedTo=_delegateDraggedImageMovedTo;
@property(nonatomic) BOOL delegateDragWillEndOperation; // @synthesize delegateDragWillEndOperation=_delegateDragWillEndOperation;
@property(nonatomic) BOOL delegateDoesCommandBySelector; // @synthesize delegateDoesCommandBySelector=_delegateDoesCommandBySelector;
@property(nonatomic) BOOL delegateProvidesDragImage; // @synthesize delegateProvidesDragImage=_delegateProvidesDragImage;
@property BOOL keyEventHandled; // @synthesize keyEventHandled=_keyEventHandled;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
- (void).cxx_destruct;
- (id)accessibilityRowHeaderUIElements;
- (id)accessibilityLinkedUIElements;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)didScrollInScrollView:(id)arg1;
- (void)scrollRowToVisible:(long long)arg1 position:(long long)arg2;
- (void)showSelectionAndCenter:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isSelectionVisible;
@property(readonly, nonatomic) long long lastRowInSelection;
@property(readonly, nonatomic) long long firstRowInSelection;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_logSpotlightInfoForClickedMessage;
- (void)mouseDown:(id)arg1;
- (void)_highlightRect:(struct CGRect)arg1 withColor:(id)arg2 usingStyle:(long long)arg3;
@property(readonly, nonatomic) BOOL shouldUseSecondaryHighlightColor;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)scrollRowToVisible:(long long)arg1;
- (id)menu;
@property __weak id <MailTableViewDelegate> delegate;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)sizeTableHeaderCellsToFit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_mailTableViewCommonInit;
- (id)menuForEvent:(id)arg1;

// Remaining properties
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
