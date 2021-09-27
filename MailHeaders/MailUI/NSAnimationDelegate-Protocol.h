//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAnimation;

@protocol NSAnimationDelegate <NSObject>

@optional
- (void)animation:(NSAnimation *)arg1 didReachProgressMark:(float)arg2;
- (float)animation:(NSAnimation *)arg1 valueForProgress:(float)arg2;
- (void)animationDidEnd:(NSAnimation *)arg1;
- (void)animationDidStop:(NSAnimation *)arg1;
- (BOOL)animationShouldStart:(NSAnimation *)arg1;
@end

