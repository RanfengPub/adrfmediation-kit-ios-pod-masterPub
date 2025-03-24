//
//  NSObject+ADRFMediationKit.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (ADRFMediationKit)

+ (BOOL)adrf_swizzleInstanceMethod:(SEL)originalSel with:(SEL)newSel;

+ (BOOL)adrf_swizzleClassMethod:(SEL)originalSel with:(SEL)newSel;

- (NSDictionary *)adrf_toDic;

- (nullable id)adrf_PerformSelector:(SEL)action withObject:(id)object, ...NS_REQUIRES_NIL_TERMINATION;

- (NSData *)adrf_serializationToJsonDataWithError:(NSError **)error;

@end

@interface NSArray<ObjectType> (ADRFMediationKit)

- (nullable ObjectType)adrf_objectOrNilAtIndex:(NSUInteger)index;

@end


@interface NSDictionary<KeyType, ObjectType> (ADRFMediationKit) 

- (nullable ObjectType)adrf_objectOrNilForKey:(KeyType)key;

@end


@interface NSMutableDictionary (ADRFMediationKit)

- (void)adrf_setValidValue:(id)value forKey:(id<NSCopying>)key;

@end

NS_ASSUME_NONNULL_END
