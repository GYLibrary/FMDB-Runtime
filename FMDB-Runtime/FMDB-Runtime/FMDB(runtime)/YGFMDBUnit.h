//
//  YGFMDBUnit.h
//  FMDB-Runtime
//
//  Created by wuyiguang on 16/7/22.
//  Copyright © 2016年 YG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YGFMDBUnit : NSObject

/**
 * TEXT数据类型和字段名
 */
NSString * yg_text(NSString *fieldName);

/**
 * INTEGER数据类型和字段名
 */
NSString * yg_integer(NSString *fieldName);

/**
 * FLOAT数据类型和字段名
 */
NSString * yg_float(NSString *fieldName);

/**
 * DOUBLE数据类型和字段名
 */
NSString * yg_double(NSString *fieldName);


/**
 * TEXT PRIMARY KEY数据类型和字段名
 */
NSString * yg_text_pk(NSString *fieldName);

/**
 * INTEGER PRIMARY KEY数据类型和字段名
 */
NSString * yg_integer_pk(NSString *fieldName);

/**
 * FLOAT PRIMARY KEY数据类型和字段名
 */
NSString * yg_float_pk(NSString *fieldName);

/**
 * DOUBLE PRIMARY KEY数据类型和字段名
 */
NSString * yg_double_pk(NSString *fieldName);

@end
