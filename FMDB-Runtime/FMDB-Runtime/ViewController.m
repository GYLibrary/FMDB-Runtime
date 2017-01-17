//
//  ViewController.m
//  FMDB-Runtime
//
//  Created by wuyiguang on 16/7/22.
//  Copyright © 2016年 YG. All rights reserved.
//

#import "ViewController.h"
#import "YGFMDB.h"
#import "UserModel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
 
    /*
     [YGFMDB shareManager:^(YGFMDB *manager) {
     
        // 建表
        manager.create_sqls(@[@"myTable",
                            yg_integer_pk(@"id"),
                            yg_text(@"name"),
                            yg_integer(@"age")]);
     }];
     */
    
    
    
    /*
     [YGFMDB shareManager:^(YGFMDB *manager) {
     
        // 插入数据
        manager.insert(@[@"myTable",
                        @{@"id":@"001"},
                        @{@"name":@"zhangsan"},
                        @{@"age":@"18"}]);
     }];
     */
    
    
    /*
     [YGFMDB shareManager:^(YGFMDB *manager) {
     
     // 获取所有数据
     NSArray *results = manager.findAll(@"myTable", [UserModel class]);
     
     // 刷新UI
        [manager main_queue:^{
            // ...
        }];
     }];
     */
    
    
    /*
     [YGFMDB shareManager:^(YGFMDB *manager) {
     
        manager.create_model([UserModel class], @"myTable", @"name");
     }];
     */
    
    
    // [YGFMDB share]().create_model([UserModel class], @"myTable", @"name");
    
    
    UserModel *model = [UserModel new];
    model.name = @"小王";
    model.age = 18;
    model.id = 1001;
    
    [YGFMDB share]().insert_model(model, @"myTable");
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
