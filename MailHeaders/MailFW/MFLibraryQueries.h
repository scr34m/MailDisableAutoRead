//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFLibraryQueries : NSObject
{
}

+ (int)bindInsertEventStatement:(id)arg1 withEvent:(id)arg2 messageID:(long long)arg3;
+ (id)checkOutStatementToInsertEvent:(id)arg1;
+ (id)checkOutStatementForEventWithMessageID:(long long)arg1 connection:(id)arg2;
+ (id)fromClauseForTables:(unsigned long long)arg1 startingFromTableExpression:(id)arg2;
+ (id)checkOutStatementToCompletelyUpdateMessage:(id)arg1;
+ (id)checkOutStatementToInsertMessage:(id)arg1;

@end

