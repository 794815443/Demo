//
//  YukeyDisplayMediaViewController.h
//  TestMessageKit
//
//  Created by jiangchao on 14-7-1.
//  Copyright (c) 2014年 jiangchao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YukeyBaseViewController.h"
#import "YukeyMessageModel.h"

@interface YukeyDisplayMediaViewController : YukeyBaseViewController
@property (nonatomic, strong) id <YukeyMessageModel> message;
@end
