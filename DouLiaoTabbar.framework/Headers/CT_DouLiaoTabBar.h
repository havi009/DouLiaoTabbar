//
//  CT_DouLiaoTabBar.h
//  douShiPin
//
//  Created by HuangQi on 2018/10/24.
//  Copyright © 2018年 douShiPin. All rights reserved.
//

#import <CTMediator.h>
#import <UIKit/UIKit.h>

#define kDouLiaoTabBar_vcs @"vcs"
#define kDouLiaoTabBar_row @"row"
#define kDouLiaoTabBar_centerClick @"kDouLiaoTabBar_centerClick"

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (CT_DouLiaoTabBar)

-(UIViewController *)DouLiaoTabBarControllerWithParams:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
