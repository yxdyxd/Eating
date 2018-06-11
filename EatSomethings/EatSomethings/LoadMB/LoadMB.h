//
//  LoadMB.h
//  TrainTicket
//
//  Created by 杨旭东 on 2018/1/5.
//  Copyright © 2018年 火眼征信. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "MBProgressHUD.h"

@interface LoadMB : UIView<UIGestureRecognizerDelegate>

/**
 *  显示简短提示语到view上
 *
 *  @param message 提示语
 *  @param view    要添加到的view
 */
+ (void) showBriefAlert:(NSString *) message inView:(UIView *) view;
/**
 自定义显示时间
 
 @param message 提示语
 @param showTime 显示时间
 @param view 添加到的view
 */
+ (void)showBriefAlert:(NSString *)message time:(NSInteger)showTime inView:(UIView *)view;
/**
 *  显示长久的（只要不用手触摸屏幕或者调用hideAlert方法就会一直显示）提示语到view上
 *
 *  @param message 提示语
 *  @param view    要添加到的view
 */
+ (void) showPermanentMessage:(NSString *)message inView:(UIView *) view;
/**
 *  显示网络加载到view上
 *
 *  @param view 要添加到的view
 */
+ (void) showLoadingInView:(UIView *) view;
/**
 自定义加载提示语（效果同showLoading）
 
 @param title 提示语
 @param view 要添加到的view
 */
+ (void)showWaitingWithTitle:(NSString *)title inView:(UIView *)view;
/**
 *  自定义加载视图接口，支持自定义图片。此处的加载为默认的时间消失
 *
 *  @param imageName  要显示的图片，最好是37 x 37大小的图片
 *  @param title 要显示的提示文字
 *  @param view 要把提示框添加到的view
 */
+(void)showAlertWithCustomImage:(NSString *)imageName title:(NSString *)title inView:(UIView *)view;


/**
 *  是否显示变淡效果，默认为YES，  PS：只为 showPermanentAlert:(NSString *) alert 和 showLoading 方法添加
 */
+ (void)showGloomy:(BOOL) isShow;
/**
 *  显示“加载中”，带圈圈，若要修改提示信息直接修改kLoadingMessage的值即可
 */
+ (void)showLoading;
/**
 *  自定义等待提示语，效果同showLoading
 *
 *  @param title 提示语
 */
+ (void)showWaitingWithTitle:(NSString *)title;

/**
 自定义等待提示语，效果同showLoading

 @param title 提示语
 @param action 添加取消按钮的动作
 @param addView 添加到的控制器
 */
+ (void)showWaitingWithTitle:(NSString *)title action:(SEL)action addView:(UIViewController *)addView;
/**
 *  一直显示自定义提示语，不带圈圈
 *
 *  @param alert 提示信息
 */
+ (void) showPermanentAlert:(NSString *) alert;
/**
 *  显示简短的提示语，默认2秒钟，时间可直接修改kShowTime
 *
 *  @param alert 提示信息
 */
+ (void) showBriefAlert:(NSString *) alert;
/**
 自定义加载视图
 @param imageName 图片名字
 @param title 标题
 */
+(void)showAlertWithCustomImage:(NSString *)imageName title:(NSString *)title;

/**
 自定义提示的显示时间，默认横屏
 
 @param message 提示语
 @param showTime 提示时间
 */
+ (void)showBriefAlert:(NSString *)message time:(NSInteger)showTime;
/**
 *  隐藏alert
 */
+(void)hideAlert;

@end

//@interface GloomyView : UIView<UIGestureRecognizerDelegate>
//@end

