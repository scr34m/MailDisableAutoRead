//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WebView.h>

@interface TilingWebView : WebView
{
    BOOL _disableSizeToFit;
    double _leftMargin;
    double _minHeight;
}

@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) BOOL disableSizeToFit; // @synthesize disableSizeToFit=_disableSizeToFit;
- (void)sizeToFit;
- (void)_tilingWebViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;

@end

