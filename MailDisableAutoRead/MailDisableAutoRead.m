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

@implementation MailDisableAutoRead

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
    
    MailDisableAutoRead *instance = [MailDisableAutoRead sharedInstance];
    
    [[((MVMailBundle *)self) class] registerBundle];
}

- (NSString *)version {
    return @"0.1.0";
}

- (id)init {
    if (self = [super init]) {
        NSLog(@"Loaded MailDisableAutoRead %@", [self version]);
    }
    return self;
}

@end
