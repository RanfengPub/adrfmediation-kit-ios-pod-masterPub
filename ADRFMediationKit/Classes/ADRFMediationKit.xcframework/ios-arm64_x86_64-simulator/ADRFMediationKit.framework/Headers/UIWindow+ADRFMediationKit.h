//
//  UIWindow+ADRFMediationKit.h
//  ADRFMediationKit
//
//  Created by 白粿 on 2021/12/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (ADRFMediationKit)

/// 获取window的最上层控制器
@property (nullable, nonatomic, readonly) UIViewController *adrf_frontViewController;

@end

NS_ASSUME_NONNULL_END
