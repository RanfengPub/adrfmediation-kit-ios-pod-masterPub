//
//  NSDate+ADRFMediationKit.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (ADRFMediationKit)

@property (nonatomic, assign, readonly) NSInteger adrf_year;
@property (nonatomic, assign, readonly) NSInteger adrf_month;
@property (nonatomic, assign, readonly) NSInteger adrf_day;
@property (nonatomic, assign, readonly) NSInteger adrf_hour;
@property (nonatomic, assign, readonly) NSInteger adrf_minute;
@property (nonatomic, assign, readonly) NSInteger adrf_seconds;
@property (nonatomic, assign, readonly) NSInteger adrf_nanoseconds;
@property (nonatomic, assign, readonly) NSInteger adrf_weekday;

+ (nullable NSDate *)adrf_dateWithDateString:(NSString *)dateString;

+(nullable NSDate *)adrf_dateWithFormat_yyyy_MM_dd_HH_mm_ss_string:(NSString *)string;
+(nullable NSDate *)adrf_dateWithFormat_yyyy_MM_dd_HH_mm_string:(NSString *)string;
+(nullable NSDate *)adrf_dateWithFormat_yyyy_MM_dd_HH_string:(NSString *)string;
+(nullable NSDate *)adrf_dateWithFormat_yyyy_MM_dd_string:(NSString *)string;
+(nullable NSDate *)adrf_dateWithFormat_yyyy_MM_string:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
