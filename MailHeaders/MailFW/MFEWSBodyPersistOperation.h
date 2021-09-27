//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFEWSPersistenceTaskOperation.h>

@class NSDictionary;
@protocol MFEWSBodyPersistOperationDelegate;

@interface MFEWSBodyPersistOperation : MFEWSPersistenceTaskOperation
{
    id <MFEWSBodyPersistOperationDelegate> _delegate;
    NSDictionary *_bodiesByMessage;
    NSDictionary *_calendarEventsByMessage;
}

@property(readonly, copy, nonatomic) NSDictionary *calendarEventsByMessage; // @synthesize calendarEventsByMessage=_calendarEventsByMessage;
@property(readonly, copy, nonatomic) NSDictionary *bodiesByMessage; // @synthesize bodiesByMessage=_bodiesByMessage;
@property(nonatomic) __weak id <MFEWSBodyPersistOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)init;
- (id)initWithBodiesByMessage:(id)arg1 calendarEventsByMessage:(id)arg2;

@end

