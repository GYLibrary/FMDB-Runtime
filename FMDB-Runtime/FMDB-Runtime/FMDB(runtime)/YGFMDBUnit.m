//
//  YGFMDBUnit.m
//  FMDB-Runtime
//
//  Created by wuyiguang on 16/7/22.
//  Copyright © 2016年 YG. All rights reserved.
//

#import "YGFMDBUnit.h"
#import "YGFMDBMacro.h"

@implementation YGFMDBUnit

NSString * FORMAT(NSString *fieldName, NSString *type)
{
    return [NSString stringWithFormat:@"%@ %@", fieldName, type];
}


NSString * yg_text(NSString *fieldName)
{
    return FORMAT(fieldName, yg_TEXT);
}

NSString * yg_integer(NSString *fieldName)
{
    return FORMAT(fieldName, yg_INTEGER);
}

NSString * yg_float(NSString *fieldName)
{
    return FORMAT(fieldName, yg_FLOAT);
}

NSString * yg_double(NSString *fieldName)
{
    return FORMAT(fieldName, yg_DOUBLE);
}


NSString * yg_text_pk(NSString *fieldName)
{
    return ygFORMAT(yg_text(fieldName), yg_SQL_PK);
}

NSString * yg_integer_pk(NSString *fieldName)
{
    return FORMAT(yg_integer(fieldName), yg_SQL_PK);
}

NSString * yg_float_pk(NSString *fieldName)
{
    return FORMAT(yg_float(fieldName), yg_SQL_PK);
}

NSString * yg_double_pk(NSString *fieldName)
{
    return FORMAT(yg_double(fieldName), yg_SQL_PK);
}

@end
