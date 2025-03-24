//
//  ADRFMediationKitTimer.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/4/10.
//

#import <Foundation/Foundation.h>

@interface ADRFMediationKitTimer : NSObject

@property (nonatomic, copy) NSRunLoopMode runLoopMode;

+ (ADRFMediationKitTimer *)timerWithTimeInterval:(NSTimeInterval)interval target:(id)atarget selector:(SEL)aSelector repeats:(BOOL)yesOrNo;

+ (ADRFMediationKitTimer *)timerWithTimeInterval:(NSTimeInterval)interval target:(id)atarget selector:(SEL)aSelector repeats:(BOOL)yesOrNo runLoopMode:(NSRunLoopMode)runLoopMode;

@property (readonly, assign) NSTimeInterval timeInterval;

@property (readonly, getter=isValid) BOOL valid;

@property (readonly, getter=isScheduled) BOOL scheduled;

- (void)invalidate;
- (BOOL)scheduleImmediately:(BOOL)immediately;
- (BOOL)pause;
- (BOOL)resume;

@end
