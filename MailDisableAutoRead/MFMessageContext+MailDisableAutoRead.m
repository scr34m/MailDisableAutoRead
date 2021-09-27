//
//  MFMessageContext+MailReceiptPlugin.m
//  MailReceipt
//
//  Created by Győrvári Gábor on 2021. 09. 27..
//  Copyright © 2021. Gyorvari Gabor. All rights reserved.
//

#import "MFMessageContext+MailDisableAutoRead.h"
#import "MailDisableAutoRead.h"

@implementation MFMessageContext_MailDisableAutoRead

// Called when context menu used to change message flag
- (void)MPPAsync_setFlagWithKey:(NSString *)flag state:(BOOL)state forMessages:(NSMutableArray *)messages reason:(long long)arg4{
    if ([flag isEqual:@"MessageIsRead"] && !state) {
        [MailDisableAutoRead setCalledContext:TRUE];
    } else {
        [MailDisableAutoRead setCalledContext:FALSE];
    }

    [self MPPAsync_setFlagWithKey:flag state:state forMessages:messages reason:arg4];
}

// Called when item viewed and after if contect menu used to change message flag
- (void)MPPAsync_setFlagsFromDictionary:(NSMutableDictionary *)flags forMessages:(NSMutableArray *)messages {
    if ([MailDisableAutoRead getCalledContext]) {
        if ([flags objectForKey:@"MessageIsRead"]) {
            if ([[flags objectForKey:@"MessageIsRead"] boolValue]) {
                NSMutableDictionary *newFlags = [[NSMutableDictionary alloc] init];
                [newFlags addEntriesFromDictionary: flags];
                [newFlags setObject:[NSNumber numberWithBool:0] forKey:@"MessageIsRead"];
                
                flags = newFlags;
            }
        }
    }
    
    [self MPPAsync_setFlagsFromDictionary:flags forMessages:messages];
}

@end
