//
//  ADRFMediationKitLogging.h
//  ADRFMediationKit
//
//  Created by 陈坤 on 2020/3/19.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, ADRFMediationKitLogLevel) {
    /// No logs
    ADRFMediationKitLogLevelOff     = 0,
    /// Error logs only. 0...00001
    ADRFMediationKitLogLevelError   = (1 << 0),
    /// Error and warning logs, 0...00010
    ADRFMediationKitLogLevelWarning = (1 << 1),
    /// Error, warning and info logs, 0...00100
    ADRFMediationKitLogLevelInfo    = (1 << 2),
    /// Error, warning, info and debug logs, 0...01000
    ADRFMediationKitLogLevelDebug   = (1 << 3),
    /// Error, warning, info, debug and verbose logs, 0...10000
    ADRFMediationKitLogLevelVerbose = (1 << 4),
    /// All logs. 1...11111
    ADRFMediationKitLogLevelAll     = NSUIntegerMax
};

ADRFMediationKitLogLevel ADRFMediationKitLogGetLevel(void);
void ADRFMediationKitLogSetLevel(ADRFMediationKitLogLevel level);

FOUNDATION_EXPORT void _ADRFMediationKitLogError(NSString *format, ...);
FOUNDATION_EXPORT void _ADRFMediationKitLogWarn(NSString *format, ...);
FOUNDATION_EXPORT void _ADRFMediationKitLogInfo(NSString *format, ...);
FOUNDATION_EXPORT void _ADRFMediationKitLogDebug(NSString *format, ...);
FOUNDATION_EXPORT void _ADRFMediationKitLogVerbose(NSString *format, ...);

#ifdef DEBUG
    #define ADRFMediationKitLogError(...)   _ADRFMediationKitLogError(__VA_ARGS__)
    #define ADRFMediationKitLogWarn(...)    _ADRFMediationKitLogWarn(__VA_ARGS__)
    #define ADRFMediationKitLogInfo(...)    _ADRFMediationKitLogInfo(__VA_ARGS__)
    #define ADRFMediationKitLogDebug(...)   _ADRFMediationKitLogDebug(__VA_ARGS__)
    #define ADRFMediationKitLogVerbose(...) _ADRFMediationKitLogVerbose(__VA_ARGS__)
#else
    #define ADRFMediationKitLogError(...)   _ADRFMediationKitLogError(__VA_ARGS__)
    #define ADRFMediationKitLogWarn(...)    _ADRFMediationKitLogWarn(__VA_ARGS__)
    #define ADRFMediationKitLogInfo(...)    _ADRFMediationKitLogInfo(__VA_ARGS__)
    #define ADRFMediationKitLogDebug(...)   _ADRFMediationKitLogDebug(__VA_ARGS__)
    #define ADRFMediationKitLogVerbose(...) {}
#endif
