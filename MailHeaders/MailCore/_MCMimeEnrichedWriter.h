//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSFont, NSString, _MCMimeEnrichedState, _MCMimeEnrichedWriterCommandStackEntry;

@interface _MCMimeEnrichedWriter : NSObject
{
    NSAttributedString *_attributedString;
    NSString *_string;
    CDStruct_2ada2998 _stringBuffer;
    NSFont *_defaultFont;
    NSFont *_defaultFixedPitchFont;
    double _defaultPointSize;
    _MCMimeEnrichedWriterCommandStackEntry *_commandStack;
    _MCMimeEnrichedWriterCommandStackEntry *_topOfStack;
    _MCMimeEnrichedState *_currentState;
    unsigned long long _currentLineStart;
    unsigned long long _lastSpace;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)appendTextFromRange:(struct _NSRange)arg1 toString:(id)arg2;
- (void)updateOutput:(id)arg1 forAttributes:(id)arg2 range:(struct _NSRange)arg3;
- (id)convertAttributedString:(id)arg1;
- (void)setState:(id)arg1 fromStackEntry:(id)arg2;
- (void)setState:(id)arg1 fromAttributes:(id)arg2;
- (void)pushEntryForCommand:(id)arg1 withParameter:(id)arg2 output:(id)arg3;
- (void)popStackEntry;
- (void)pushStackEntry:(id)arg1;

@end

