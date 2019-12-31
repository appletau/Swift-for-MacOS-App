//
//  Objective-CClass.h
//  Swift for MacOS App
//
//  Created by tautau on 2019/12/31.
//  Copyright © 2019 tautau. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Objective_CClass : NSObject
// Declare a static class method.
+(void)printHello;
// Declare an instance method.
-(NSString *)sayHello;

@end

NS_ASSUME_NONNULL_END
