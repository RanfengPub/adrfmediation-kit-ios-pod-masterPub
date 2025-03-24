//
//  ADRFMediationKitGzipUtils.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ADRFMediationKitGzipUtils : NSObject

+ (nullable NSData *)adrf_gzipData:(NSData *)gzipData;

+ (nullable NSData *)adrf_unGzipData:(NSData *)unGzipData;

@end

NS_ASSUME_NONNULL_END
