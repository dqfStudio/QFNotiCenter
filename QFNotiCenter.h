//
//  QFNotiCenter.h
//  QFNotiCenter
//
//  Created by dqf on 2017/7/31.
//  Copyright © 2017年 dqfStudio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QFNotiCenter : NSObject

+ (void)registerNoti:(nonnull NSString *)name callback:(void(^_Nullable)())callback;
+ (void)postNoti:(nonnull NSString *)name;
+ (void)removeNoti:(nonnull NSString *)name;

@end
