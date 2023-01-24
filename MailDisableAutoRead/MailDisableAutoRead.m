//
//  MailDisableAutoRead.m
//  MailDisableAutoRead
//
//  Created by Győrvári Gábor on 2021. 09. 27..
//

#import <AppKit/AppKit.h>
#import <objc/objc-runtime.h>
#import "MailDisableAutoRead.h"
#import "MVMailBundle.h"
#import "CodeInjector.h"

@implementation MailDisableAutoRead

// TODO use sharedInstance!?
BOOL calledContext;

+ (void)initialize {
    if(self != [MailDisableAutoRead class])
        return;
    
    Class mvMailBundleClass = NSClassFromString(@"MVMailBundle");
    if(!mvMailBundleClass)
        return;
    
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
    class_setSuperclass([self class], mvMailBundleClass);
#pragma GCC diagnostic pop
    
    // Initialize the bundle by swizzling methods, loading keys, ...
    [MailDisableAutoRead sharedInstance];
    
    [[((MVMailBundle *)self) class] registerBundle];
}

- (NSString *)version {
    return @"0.1.10";
}

- (id)init {
    if (self = [super init]) {
        NSLog(@"Loaded MailDisableAutoRead %@", [self version]);
        [CodeInjector injectUsingMethodPrefix:@"MPP"];
    }
    return self;
}

+ (void)setCalledContext: (BOOL)state
{
    calledContext = state;
}

+ (BOOL)getCalledContext
{
    return calledContext;
}

@end
