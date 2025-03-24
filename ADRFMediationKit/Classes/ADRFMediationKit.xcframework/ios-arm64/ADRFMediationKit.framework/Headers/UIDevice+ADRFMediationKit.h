//
//  UIDevice+ADRFMediationKit.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (ADRFMediationKit)

#pragma mark - Device Information

// 系统版本号 (e.g. 8.0)
+ (double)adrf_systemVersion;

// 设置是否可以获取运营商识别码
+ (void)setImsiEnable:(BOOL)on;

// 运营商识别码 (e.g. "46001"), 获取失败返回nil
+ (nullable NSString *)adrf_imsi:(BOOL)isBusiness;

// 获取系统更新时间标识
+ (NSString *)adrf_getUpdate:(BOOL)isBusiness;

/// 获取设备初始化时间
+(NSString *)adrf_getFileTime:(BOOL)isBusiness;

/// 获取系统启动时间标识
+ (NSString *)adrf_getBoot:(BOOL)isBusiness;

/// 获取系统启动时间戳（秒）
+ (long)adrf_getBootTime:(BOOL)isBusiness;

/// 获取系统启动时间戳（纳秒）
+ (NSString *)adrf_getBootNanoTime:(BOOL)isBusiness;

// 设置是否可以获取网络类型
+ (void)setNetworkTypeEnable:(BOOL)on;

// 网络类型 (e.g. "4G"), 获取失败返回nil
+ (nullable NSString *)adrf_networkType;

/// 网络状态（小写）
+ (NSString *)adrf_networkType_lowercaseString;

// 设备model值, eg. D2AP
+ (NSString *)adrf_getHardwareModel:(BOOL)isBusiness;

// 系统最近一次更新时间, 微秒级时间戳, 带6位小数（iOS）
+ (NSString *)adrf_getOsUpdateTime:(BOOL)isBusiness;

// 系统最近一次更新时间, 纳秒级时间戳, 带9位小数（iOS）
+ (NSString *)adrf_getOsUpdateNanoTime:(BOOL)isBusiness;

// 获取硬盘容量
+ (NSInteger)adrf_diskSize:(BOOL)isBusiness;

// 获取内存大小
+ (NSInteger)adrf_memorySize:(BOOL)isBusiness;

// idfa广告标识符,获取失败返回nil
+ (nullable NSString *)adrf_idfa:(BOOL)isBusiness;

// 广告标识授权情况
+ (NSUInteger)adrf_authStatus;

// 设置是否可以获取IDFV
+ (void)setIdfvEnable:(BOOL)on;

// idfv,获取失败返回空字符串
+ (NSString *)adrf_idfv:(BOOL)isBusiness;

// 设备原始型号
+ (NSString *)adrf_rawDeviceModel:(BOOL)isBusiness;

// 设备型号
+ (NSString *)adrf_deviceModel:(BOOL)isBusiness;

// 设备类型("PHONE"/"PAD"/"")
+ (NSString *)adrf_deviceType;

// 设备上次开机时间
+ (nullable NSString *)adrf_lastPowerONTime;

// 获取uuid
+ (NSString *)adrf_uuid;

// 是否模拟器
+ (BOOL)adrf_isSimulator;

// 当前设备PPI
+ (NSInteger)adrf_devicePPI:(BOOL)isBusiness;

// 正在充电
+ (BOOL) adrf_isCharging;

// 设备IP
+ (NSString *) adrf_IP;

// 获取IPV6地址
+ (NSString *) adrf_IPV6:(BOOL)isBusiness;

// 设备mac地址
+ (NSString *) adrf_MAC:(BOOL)isBusiness;

@end

#ifndef kSystemVersion
#define kSystemVersion [UIDevice adrf_systemVersion]
#endif

#ifndef kiOS7Later
#define kiOS7Later (kSystemVersion >= 7)
#endif

#ifndef kiOS8Later
#define kiOS8Later (kSystemVersion >= 8)
#endif

#ifndef kiOS9Later
#define kiOS9Later (kSystemVersion >= 9)
#endif

#ifndef kiOS10Later
#define kiOS10Later (kSystemVersion >= 10)
#endif

#ifndef kiOS11Later
#define kiOS11Later (kSystemVersion >= 11)
#endif

#ifndef kiOS12Later
#define kiOS12Later (kSystemVersion >= 12)
#endif

#ifndef kiOS13Later
#define kiOS13Later (kSystemVersion >= 13)
#endif

#ifndef kiOS14Later
#define kiOS14Later (kSystemVersion >= 14)
#endif

NS_ASSUME_NONNULL_END
