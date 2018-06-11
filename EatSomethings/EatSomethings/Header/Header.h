//
//  Header.h
//  TrainTicket
//
//  Created by 杨旭东 on 2017/11/27.
//  Copyright © 2017年 火眼征信. All rights reserved.
//

#ifndef Header_h
#define Header_h


#define APPDELEGATE     ((AppDelegate*)[[UIApplication sharedApplication] delegate])

//打印全部信息
#define CLog(format, ...)  NSLog(format, ## __VA_ARGS__)
#define NSLog(FORMAT, ...) printf("%s\n", [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);

//适配屏幕
#define ScreenToTop 64
#define screenWidth [UIScreen mainScreen].bounds.size.width
#define screenHeight [UIScreen mainScreen].bounds.size.height

//设置放大或者缩小系数
#define ScaleSize [UIScreen mainScreen].bounds.size.width/414.0
#define ScrHScaleSize 736.0/[UIScreen mainScreen].bounds.size.height

//适配iPhone X （状态栏）
#define Statusbar [[UIApplication sharedApplication] statusBarFrame].size.height
#define Navigationbar self.navigationController.navigationBar.frame.size.height
//判断当前是否为iPhoneX
#define kDevice_Is_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

//http://123.56.153.221:8001/
//http://123.56.153.221:8002/
//http://123.56.153.221:8003/
//http://123.56.153.221:7890/
//http://192.168.30.71:7890/ (本地)
#define url(type) [NSString stringWithFormat:@"http://123.56.153.221:8003/%@",type]

#import "UIView+STDYExtension.h"
#import "UITextField+CHTHealper.h"
#import "LoadMB.h"


#endif /* Header_h */
