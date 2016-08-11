//
//  YukeyLocationHelper.h
//  TestMessageKit
//
//  Created by jiangchao on 14-7-1.
//  Copyright (c) 2014年 jiangchao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
typedef void(^DidGetGeolocationsCompledBlock)(NSArray *placemarks);

@interface YukeyLocationHelper : NSObject

- (void)getCurrentGeolocationsCompled:(DidGetGeolocationsCompledBlock)compled;
@end
