//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailUI/MUIWebDocumentView.h>

@interface MessageWebDocumentView : MUIWebDocumentView
{
    BOOL _isSingleton;
    BOOL _showRedundantContentLinks;
    BOOL _hasBackground;
    BOOL _shouldBeLight;
    long long _currentClusterIndex;
}

@property(nonatomic) BOOL shouldBeLight; // @synthesize shouldBeLight=_shouldBeLight;
@property(nonatomic) BOOL hasBackground; // @synthesize hasBackground=_hasBackground;
@property(nonatomic) long long currentClusterIndex; // @synthesize currentClusterIndex=_currentClusterIndex;
- (void)linkAccessibilityView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_appearanceDefaultsToDark;
- (void)_forceLightAppearance;
- (void)_shouldBeLight:(id)arg1;
- (void)_hasBackgroundChanged:(id)arg1;
- (void)toggleHighlightRedundantContent:(id)arg1;
- (void)generateSelectionMessageBody:(CDUnknownBlockType)arg1;
- (void)generateStyleInlinedMessageBody:(CDUnknownBlockType)arg1;
- (BOOL)shouldHandleClickForURL:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)setWebDocument:(id)arg1;
@property(nonatomic) BOOL showRedundantContentLinks;
@property(nonatomic) BOOL isSingleton;
- (void)dealloc;
- (BOOL)_debugBundleLoaded;
- (void)_messageWebDocumentViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

