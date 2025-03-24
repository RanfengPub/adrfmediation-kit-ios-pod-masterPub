/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <UIKit/UIKit.h>
@class ADRFMediationImageCacheConfig;

@interface ADRFMediationDiskCache : NSObject

@property (nonatomic, strong, readonly, nonnull) ADRFMediationImageCacheConfig *config;

- (nonnull instancetype)init NS_UNAVAILABLE;

- (void)moveCacheDirectoryFromPath:(nonnull NSString *)srcPath toPath:(nonnull NSString *)dstPath;

- (nullable instancetype)initWithCachePath:(nonnull NSString *)cachePath config:(nonnull ADRFMediationImageCacheConfig *)config;

- (BOOL)containsDataForKey:(nonnull NSString *)key;

- (nullable NSData *)dataForKey:(nonnull NSString *)key;

- (void)setData:(nullable NSData *)data forKey:(nonnull NSString *)key;

- (nullable NSData *)extendedDataForKey:(nonnull NSString *)key;

- (void)setExtendedData:(nullable NSData *)extendedData forKey:(nonnull NSString *)key;

- (void)removeDataForKey:(nonnull NSString *)key;

- (void)removeAllData;

- (void)removeExpiredData;

- (nullable NSString *)cachePathForKey:(nonnull NSString *)key;

- (NSUInteger)totalCount;

- (NSUInteger)totalSize;

@end
