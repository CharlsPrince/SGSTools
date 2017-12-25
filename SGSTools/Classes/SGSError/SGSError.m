//
//  SGSError.m
//  SGSTools_Example
//
//  Created by charls on 2017/12/21.
//  Copyright © 2017年 CharlsPrince. All rights reserved.
//

#import "SGSError.h"

NSString *const SGSErrorDomain = @"com.southgis.SGSCommonModules.ErrorDomain";

@implementation SGSError

/// 初始化器
+ (instancetype)sgsErrorWithCode:(NSInteger)code userInfo:(NSDictionary *)dict {
    SGSError *error = [SGSError errorWithDomain:SGSErrorDomain code:code userInfo:dict];
    return error;
}

/// 函数初始化
SGSError *sgsErrorWithCode(NSInteger code, NSString * _Nullable localizedDescription) {
    NSDictionary *userInfo = nil;
    if (localizedDescription != nil) {
        userInfo = @{NSLocalizedDescriptionKey:localizedDescription};
    }
    return [SGSError sgsErrorWithCode:code userInfo:userInfo];
}

@end
