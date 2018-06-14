//
//  FirstViewController.m
//  EatSomethings
//
//  Created by 杨旭东 on 2018/6/11.
//  Copyright © 2018年 火眼征信. All rights reserved.
//

#import "FirstViewController.h"
#import "ZCWScrollNumView.h"

#define kAllFullSuperviewMask      UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleBottomMargin;

@interface FirstViewController ()

// 选择视图
@property (nonatomic, strong) ZCWScrollNumView *scrollNumber;
// 开始按钮
@property (nonatomic, strong) UIButton *startBtn;

@end

@implementation FirstViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // 设置首页的背景颜色
    self.view.backgroundColor = [UIColor cyanColor];

    // 设置框的个数
    self.scrollNumber.numberSize = 1;
    self.scrollNumber = [[ZCWScrollNumView alloc]init];
    // 选择框的大小
    self.scrollNumber.frame = CGRectMake(50*ScaleSize, 100*ScaleSize, self.view.width - 100*ScaleSize, 50*ScaleSize);
    // 颜色
    self.scrollNumber.backgroundColor = [UIColor whiteColor];
    
    // 开始按钮
    self.startBtn = [[UIButton alloc]initWithFrame:(CGRectMake(50*ScaleSize, 170*ScaleSize, self.view.width - 100*ScaleSize, 50*ScaleSize))];
    [self.startBtn setTitle:@"开始" forState:(UIControlStateNormal)];
    [self.startBtn addTarget:self action:@selector(startChoice) forControlEvents:(UIControlEventTouchUpInside)];
    self.startBtn.backgroundColor = [UIColor purpleColor];
    // 切圆角
    self.startBtn.layer.cornerRadius = 10;
    self.startBtn.layer.masksToBounds = YES;
    // 边框
    self.startBtn.layer.borderWidth = 2;
//    self
    
    
    // 父视图
    [self.view addSubview:self.scrollNumber];
    [self.view addSubview:self.startBtn];

    // 子控件
    
    CGRect tmp = {{0, 0}, {100, 100}};
    // 选择框的个数
    self.scrollNumber.numberSize = 1;
    UIImage *image = [[UIImage imageNamed:@"bj_numbg"] stretchableImageWithLeftCapWidth:10 topCapHeight:14];
    self.scrollNumber.backgroundView = [[UIImageView alloc] initWithImage:image];
    UIView *digitBackView = [[UIView alloc] initWithFrame:tmp];
    digitBackView.backgroundColor = [UIColor clearColor];
    digitBackView.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
    digitBackView.autoresizesSubviews = YES;
    image = [[UIImage imageNamed:@"money_bg"] stretchableImageWithLeftCapWidth:12 topCapHeight:12];
    UIImageView *bgImageView = [[UIImageView alloc] initWithImage:image];
    bgImageView.frame = tmp;
    bgImageView.autoresizingMask = kAllFullSuperviewMask;
    [digitBackView addSubview:bgImageView];
    image = [[UIImage imageNamed:@"money_bg_mask"] stretchableImageWithLeftCapWidth:12 topCapHeight:12];
    UIImageView *bgMaskImageView = [[UIImageView alloc] initWithImage:image];
    bgMaskImageView.autoresizingMask = kAllFullSuperviewMask;
    bgMaskImageView.frame = tmp;
    [digitBackView addSubview:bgMaskImageView];

    self.scrollNumber.digitBackgroundView = digitBackView;
    self.scrollNumber.digitColor = [UIColor whiteColor];
    self.scrollNumber.digitFont = [UIFont systemFontOfSize:17.0];
    [self.scrollNumber didConfigFinish];
    
    
}

// 开始选择
- (void)startChoice
{
    [self.scrollNumber setNumber:rand() withAnimationType:ZCWScrollNumAnimationTypeRand animationTime:3];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
