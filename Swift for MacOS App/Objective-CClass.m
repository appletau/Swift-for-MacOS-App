//
//  Objective-CClass.m
//  Swift for MacOS App
//
//  Created by tautau on 2019/12/31.
//  Copyright © 2019 tautau. All rights reserved.
//

#import "Objective-CClass.h"

@implementation Objective_CClass
+(void)printHello{
    // Print log message.
    NSLog(@"Hello from objective-c class.");
}
// This function will return a NSString object with string messages.
-(NSString *)sayHello{
    NSString * var;
    
    var = @"Hello from objective-c class.";
    
    return var;
    
}
@end
