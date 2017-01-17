//
//  YGFMDB.h
//  FMDB-Runtime
//
//  Created by wuyiguang on 16/7/22.
//  Copyright © 2016年 YG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YGFMDBMacro.h"
#import "YGFMDBUnit.h"
#import "FMDB.h"

@interface YGFMDB : NSObject

/**
 *  创建YGFMDB单例对象
 *
 *  @param manager block
 */
+ (void)shareManager:(void(^)(YGFMDB *manager))manager;

/**
 *  获取单例对象
 */
+ (YGFMDB *(^)())share;

/*
 *  建表
 *
 *  @param sqls 创建的字段数组
 */
- (void (^)(NSArray *sqls))create_sqls;

/**
 *  通过模型建表
 *
 *  @param cls 创建表时的模型，自动取出模型中的属性作为表字段
 *  @param tbName 表名
 *  @param pk 主键
 */
- (void (^)(__weak Class cls, NSString *tbName, NSString *pk))create_model;

/**
 *  插入数据
 */
- (void (^)(NSArray *sqls))insert_sqls;

/**
 *  通过模型插入数据
 *
 *  @param model 插入数据时的模型
 *  @param tbName 表名
 */
- (void (^)(__weak id model, NSString *tbName))insert_model;

/**
 *  获取表中的所有数据
 *
 *  @param 插入数据时的模型
 */
- (NSArray * (^)(NSString *tableName, __weak Class cls))findAll;

/**
 *  回到主线程
 */
- (void)main_queue:(void(^)())queue;

@end
