//
//  ADRFMediationKitImpressionTimer.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/4/10.
//

#import <UIKit/UIKit.h>

static inline BOOL ADRfKitViewIsVisible(UIView *view);
static inline BOOL ADRfKitViewHasHiddenAncestor(UIView *view);
static inline BOOL ADRfKitViewIntersectsParentWindow(UIView *view);
static inline BOOL ADRfKitViewIntersectsParentWindowWithPercent(UIView *view, CGFloat percentVisible);
static inline UIWindow * ADRfKitViewGetParentWindow(UIView *view);

@protocol ADRFMediationKitImpressionTimerDelegate <NSObject>

- (void)viewWillLogImpression:(UIView *)view;
- (void)viewDidPresentImpression:(UIView *)view;
@end

@interface ADRFMediationKitImpressionTimer : NSObject

@property (nonatomic, weak) id<ADRFMediationKitImpressionTimerDelegate> delegate;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
初始化一个视图的监听对象, 然后回调给外部该视图是否达到展示要求

@param requiredSecondsForImpression 展示时间 [0, infinite]
@param requiredViewVisibilityPixels 展示像素 [0, infinite]
*/
- (instancetype)initWithRequiredSecondsForImpression:(NSTimeInterval)requiredSecondsForImpression requiresViewVisibilityPixels:(CGFloat)requiredViewVisibilityPixels NS_DESIGNATED_INITIALIZER;

/**
初始化一个视图的监听对象, 然后回调给外部该视图是否达到展示要求

@param requiredSecondsForImpression 展示时间 [0, infinite]
@param visibilityPercentage 视图展示比例 [0, 1], 1代表100%
*/
- (instancetype)initWithRequiredSecondsForImpression:(NSTimeInterval)requiredSecondsForImpression requiredViewVisibilityPercentage:(CGFloat)visibilityPercentage NS_DESIGNATED_INITIALIZER;

- (void)startTrackingView:(UIView *)adView;

@end

