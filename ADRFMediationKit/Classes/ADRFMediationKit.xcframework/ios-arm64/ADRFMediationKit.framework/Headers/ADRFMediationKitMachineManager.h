//
//  ADRFMediationKitMachineManager.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/4/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ADRFMediationKitMachineManager : NSObject

+ (instancetype)sharedInstance;

- (NSString *)readAdMachine;

+ (nullable NSString *)readIdfa;

+ (void)saveMacAddress:(NSString *)macAddress;

+ (nullable NSString *)macAddress;

@end

NS_ASSUME_NONNULL_END
