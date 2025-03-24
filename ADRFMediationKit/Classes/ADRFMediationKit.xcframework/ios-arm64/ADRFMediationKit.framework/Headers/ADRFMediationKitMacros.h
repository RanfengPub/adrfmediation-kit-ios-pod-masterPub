//
//  ADRFMediationKitMacros.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/17.
//

#ifndef ADRFMediationKitMacros_h
#define ADRFMediationKitMacros_h

#import <UIKit/UIKit.h>

#define ADRF_SUPPRESS_PERFORM_SELECTOR_LEAK_WARNING(code) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
code; \
_Pragma("clang diagnostic pop")

// 字符串是否为空
#define kADRFStringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || ![str isKindOfClass:[NSString class]] || [str length] < 1 ? YES : NO)
// 数组是否为空
#define kADRFArrayIsEmpty(array) (array == nil || [array isKindOfClass:[NSNull class]] || ![array isKindOfClass:[NSArray class]] || array.count == 0)
// 字典是否为空
#define kADRFDictIsEmpty(dict) (dict == nil || [dict isKindOfClass:[NSNull class]] || ![dict isKindOfClass:[NSDictionary class]] || dict.allKeys.count == 0)
// 对象是否为空
#define kADRFObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [_object isKindOfClass:[NSData class]] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [_object isKindOfClass:[NSArray class]] && [(NSArray *)_object count] == 0))

//强弱引用
#define kADRFWeakSelf(type)  __weak typeof(type) weak##type = type;
#define kADRFStrongSelf(type) __strong typeof(type) type = weak##type;

#define kADRFKitVersion @"0.5.6.04141"


static inline CGSize ADRfKitScreenSize(void) {
    static CGSize size;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        size = [UIScreen mainScreen].bounds.size;
        if (size.height < size.width) {
            CGFloat tmp = size.height;
            size.height = size.width;
            size.width = tmp;
        }
    });
    return size;
}

static inline CGFloat ADRfKitScreenScale(void) {
    static CGFloat scale;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        scale = [UIScreen mainScreen].scale;
    });
    return scale;
}

// main screen's scale (portrait)
#ifndef kADRFScreenScale
#define kADRFScreenScale ADRfKitScreenScale();
#endif

// main screen's size (portrait)
#ifndef kADRFScreenSize
#define kADRFScreenSize ADRfKitScreenSize();
#endif

// main screen's width (portrait)
#ifndef kADRFScreenWidth
#define kADRFScreenWidth ADRfKitScreenSize().width
#endif

// main screen's height (portrait)
#ifndef kADRFScreenHeight
#define kADRFScreenHeight ADRfKitScreenSize().height
#endif

#endif /* ADRFMediationKitMacros_h */
