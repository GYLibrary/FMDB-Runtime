//
//  YGFMDBMacro.h
//  FMDB-Runtime
//
//  Created by wuyiguang on 16/7/22.
//  Copyright © 2016年 YG. All rights reserved.
//

#ifndef YGFMDBMacro_h
#define YGFMDBMacro_h

#define ygFORMAT(fmt, ...) [NSString stringWithFormat:(fmt), ##__VA_ARGS__]

#define yg_TEXT     @"TEXT"
#define yg_FLOAT    @"FLOAT"
#define yg_DOUBLE   @"DOUBLE"
#define yg_INTEGER  @"INTEGER"

#define yg_PROPERTY_NAME @"YG_PROPERTY_NAME"
#define yg_PROPERTY_YTPE @"YG_PROPERTY_TYPE"

#define yg_SQL_CREATE       @"CREATE TABLE IF NOT EXISTS"
#define yg_SQL_PK           @"PRIMARY KEY NOT NULL"
#define yg_SQL_INSERT       @"INSERT INTO"
#define yg_SQL_SELECT_ALL   @"SELECT * FROM"
#define yg_SQL_PRAGMA       @"PRAGMA TABLE_INFO"

/**
 * 重写NSLog，Debug模式下打印日志和当前行数
 * 防止release版本中含有多余的打印信息
 */
#if DEBUG
#define NSLog(fmt, ...) fprintf(stderr,"\nline:%d content:%s\n", __LINE__, [[NSString stringWithFormat:fmt, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(fmt, ...) nil
#endif

#endif /* YGFMDBMacro_h */
