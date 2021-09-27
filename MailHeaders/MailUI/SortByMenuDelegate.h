//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class NSMenuItem, NSString;

@interface SortByMenuDelegate : NSObject <NSMenuDelegate>
{
    NSMenuItem *_ascendingMenuItem;
    NSMenuItem *_descendingMenuItem;
}

@property(nonatomic) __weak NSMenuItem *descendingMenuItem; // @synthesize descendingMenuItem=_descendingMenuItem;
@property(nonatomic) __weak NSMenuItem *ascendingMenuItem; // @synthesize ascendingMenuItem=_ascendingMenuItem;
- (void).cxx_destruct;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

