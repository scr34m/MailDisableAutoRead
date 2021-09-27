//
//  MFMessageContext+MailReceiptPlugin.h
//  MailReceipt
//
//  Created by Győrvári Gábor on 2021. 09. 27..
//  Copyright © 2021. Gyorvari Gabor. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MFMessageContext_MailDisableAutoRead : NSObject

- (void)MPPAsync_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 reason:(long long)arg4;
- (void)MPPAsync_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;

@end
