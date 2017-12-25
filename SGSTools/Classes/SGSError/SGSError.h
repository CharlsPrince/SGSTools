//
//  SGSError.h
//  SGSTools_Example
//
//  Created by charls on 2017/12/21.
//  Copyright © 2017年 CharlsPrince. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SGSErrorCode) {
    SGSErrorCodeDefault = 200,       //! 无错误
    SGSErrorCodeInvalidRequest = 201, //! 无效请求
    SGSErrorCodeNilMethod = 202,      //! 方法未找到
    SGSErrorCodeInvalidParameter = 203  //! 无效参数
};

extern NSString * const SGSErrorDomain;

@interface SGSError : NSError

/**
 SGSError 初始化器
 
 @param code 错误代码值
 @param dict 错误信息
 @return SGSError 对象
 */
+ (instancetype)sgsErrorWithCode:(NSInteger)code userInfo:(nullable NSDictionary *)dict;

/**
 函数式初始化
 
 @param code 错误代码值
 @param localizedDescription 本地化描述
 @return SGSError 对象
 */
extern SGSError *sgsErrorWithCode(NSInteger code, NSString * _Nullable localizedDescription);


@end

NS_ASSUME_NONNULL_END
