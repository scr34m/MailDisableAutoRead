//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MFSMTPEnhancedStatusCode : NSObject
{
    int _classStatus;
    int _subject;
    int _detail;
}

@property(nonatomic) int detail; // @synthesize detail=_detail;
@property(nonatomic) int subject; // @synthesize subject=_subject;
@property(nonatomic) int classStatus; // @synthesize classStatus=_classStatus;
@property(readonly, nonatomic) long long interpretedStatusCode;
- (id)description;

@end

