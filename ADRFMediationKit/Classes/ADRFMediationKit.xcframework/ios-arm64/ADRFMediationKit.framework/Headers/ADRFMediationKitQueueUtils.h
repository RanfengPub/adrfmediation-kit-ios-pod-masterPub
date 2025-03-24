//
//  ADRFMediationKitQueueUtils.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/6/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ADRFMediationKitQueueUtils : NSObject

#pragma mark - main queue

FOUNDATION_EXPORT void ADRfAutoAsyncMainBlock(void (^block) (void)) __attribute__((overloadable));

FOUNDATION_EXPORT void ADRfAsyncMainBlock(void (^block) (void)) __attribute__((overloadable));

FOUNDATION_EXPORT void ADRfDelayAsyncMainBlock(double second, void (^block) (void)) __attribute__((overloadable));

#pragma mark - global queue

FOUNDATION_EXPORT void ADRfAsyncGlobalBlock(void (^block) (void)) __attribute__((overloadable));

FOUNDATION_EXPORT void ADRfDelayAsyncGlobalBlock(double second, void (^block) (void)) __attribute__((overloadable));

#pragma mark - report global queue
FOUNDATION_EXPORT void ADRfReportAsyncGlobalBlock(void (^block) (void)) __attribute__((overloadable));

#pragma mark - imege load global queue
FOUNDATION_EXPORT void ADRfImageAsyncGlobalBlock(void (^block) (void)) __attribute__((overloadable));

@end

NS_ASSUME_NONNULL_END
