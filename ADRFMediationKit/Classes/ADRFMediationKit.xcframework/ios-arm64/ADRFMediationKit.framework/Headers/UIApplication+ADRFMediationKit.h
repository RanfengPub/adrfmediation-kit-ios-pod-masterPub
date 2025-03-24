//
//  UIApplication+ADRFMediationKit.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (ADRFMediationKit)

/// 手机是否已经越狱
@property (nonatomic, readonly) BOOL adrf_isJalibreak;
/// app是否是盗版(不是从app store下载的)
@property (nonatomic, readonly) BOOL adrf_isPirated;

/// app是否正在被调试
@property (nonatomic, readonly) BOOL adrf_isBeingDebugged;

/// 应用版本
@property (nonatomic, readonly) NSString *adrf_appVersion;

/// 包名
@property (nonatomic, readonly) NSString *adrf_appBundleId;

//  app名称
@property (nonatomic, readonly) NSString *adrf_appBundleName;

/// "Documents"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *adrf_documentsURL;
@property (nonatomic, readonly) NSString *adrf_documentsPath;

/// "Caches"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *adrf_cachesURL;
@property (nonatomic, readonly) NSString *adrf_cachesPath;

/// "Library"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *adrf_libraryURL;
@property (nonatomic, readonly) NSString *adrf_libraryPath;

/// 应用当前展示的控制器
@property (nonatomic, readonly, nullable) UIViewController *adrf_viewController;


+ (NSString *)getWebViewUa;

@end

NS_ASSUME_NONNULL_END
