//
//  NSData+ADRFMediationKit.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (ADRFMediationKit)

/**
 AES CBC 128位加密模式
 */
- (nullable NSData *)adrf_AESCBC128EncryptWithKey:(NSString *)key gIv:(NSString *)Iv;
/**
AES CBC 128位解密模式
*/
- (nullable NSData *)adrf_AESCBC128DecryptWithKey:(NSString *)key gIv:(NSString *)Iv;
/**
AES CBC 256位加密模式
*/
- (nullable NSData *)adrf_AESCBC256EncryptWithKey:(NSString *)key gIv:(NSString *)Iv;
/**
AES CBC 256位解密模式
*/
- (nullable NSData *)adrf_AESCBC256DecryptWithKey:(NSString *)key gIv:(NSString *)Iv;

/**
AES CBC 256位解密模式
*/
- (nullable NSData *)adrf_AESCBC256OpenDecryptWithKey:(NSString *)key gIv:(NSString *)Iv;

@end

NS_ASSUME_NONNULL_END
