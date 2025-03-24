//
//  UIView+ADRFMediationKit.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ADRFMediationKit)

/**
 Returns the view's view controller (may be nil).
 */
@property (nullable, nonatomic, readonly) UIViewController *adrf_viewController;

@property (nonatomic, readonly, assign) BOOL adrf_inScreen;

@property (nonatomic, readonly, assign) BOOL adrf_isVisible;

@end

NS_ASSUME_NONNULL_END
