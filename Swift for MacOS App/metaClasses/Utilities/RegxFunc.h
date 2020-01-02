//
//  RegxFunc.h
//  Swift for MacOS App
//
//  Created by tautau on 2020/1/2.
//  Copyright © 2020 tautau. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RegxFunc : NSObject
+(void)DEMO;
+(NSMutableArray*)regxByText:(NSString*)content textRegx:(NSString*)regx;
+(NSMutableArray*)regxByGroup:(NSString*)content groupRegx:(NSString*)regx;
+(Boolean)isMatchByRegx:(NSString*)content validRegx:(NSString*)regx;
+(NSString*)replaceByRegx:(NSString*)content replaceStr:(NSString*)str validRegx:(NSString*)regx;
@end

NS_ASSUME_NONNULL_END
