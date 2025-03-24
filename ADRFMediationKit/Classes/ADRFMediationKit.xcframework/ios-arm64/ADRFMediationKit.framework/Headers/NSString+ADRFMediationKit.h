//
//  NSString+ADRFMediationKit.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (ADRFMediationKit)

#pragma mark - Drawing

/**
 Returns the size of the string if it were rendered with the specified constraints.
 
 @param font          The font to use for computing the string size.
 
 @param size          The maximum acceptable size for the string. This value is
 used to calculate where line breaks and wrapping would occur.
 
 @param lineBreakMode The line break options for computing the size of the string.
 For a list of possible values, see NSLineBreakMode.
 
 @return              The width and height of the resulting string's bounding box.
 These values may be rounded up to the nearest whole number.
 */
- (CGSize)adrf_sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;

/**
 Returns the width of the string if it were to be rendered with the specified
 font on a single line.
 
 @param font  The font to use for computing the string width.
 
 @return      The width of the resulting string's bounding box. These values may be
 rounded up to the nearest whole number.
 */
- (CGFloat)adrf_widthForFont:(UIFont *)font;

/**
 Returns the height of the string if it were rendered with the specified constraints.
 
 @param font   The font to use for computing the string size.
 
 @param width  The maximum acceptable width for the string. This value is used
 to calculate where line breaks and wrapping would occur.
 
 @return       The height of the resulting string's bounding box. These values
 may be rounded up to the nearest whole number.
 */
- (CGFloat)adrf_heightForFont:(UIFont *)font width:(CGFloat)width;

/**
 对字符串进行md5加密
 */
- (NSString *)adrf_md5;

// 将字符串转换为时间
/**
*  yyyy-MM-dd
*/
- (NSString *)adrf_getDateWithYearMonthDay;

/**
*  MM-dd
*/
- (NSString *)adrf_getDateWithMonthDay;

/**
*  yyyy-MM
*/
- (NSString *)adrf_getDateWithYearMonth;

/**
*  yyyy
*/
- (NSString *)adrf_getDateWithYear;

/**
 HH_mm_ss 0000
 */
- (NSString *)adrf_getDateWithHourMinSecNanoSec;

/**
 获取长度固定的随机字符串
 */
+ (NSString *)adrf_randomStringOfLength:(NSInteger)length;


@end

NS_ASSUME_NONNULL_END
