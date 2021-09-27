//
//  MailDisableAutoRead.h
//  MailDisableAutoRead
//
//  Created by Győrvári Gábor on 2021. 09. 27..
//

#import <Foundation/Foundation.h>

@interface MailDisableAutoRead : NSObject
+ (void)setCalledContext: (BOOL)state;
+ (BOOL)getCalledContext;
@end

@interface MailDisableAutoRead (NoImplementation)
+ (id)sharedInstance;
@end
 
