//
//  WindAds.h
//  WindSDK
//
//  Created by Codi on 2021/11/1.
//

#import <Foundation/Foundation.h>
#import <WindSDK/WindAdOptions.h>

typedef NS_ENUM(NSUInteger, WindLogLevel){
    WindLogLevelError=8,
    WindLogLevelWarning=6,
    WindLogLevelInformation=4,
    WindLogLevelDebug=2
};

typedef NS_ENUM (NSInteger, WindCCPAStatus) {
    WindCCPAUnknown = 0,
    WindCCPAAccepted,
    WindCCPADenied,
};


typedef NS_ENUM (NSInteger, WindConsentStatus) {
    WindConsentUnknown = 0,
    WindConsentAccepted,
    WindConsentDenied,
};

typedef NS_ENUM (NSInteger, WindAgeRestrictedStatus) {
    WindAgeRestrictedStatusUnknow = 0,
    WindAgeRestrictedStatusYES, //年龄受限制
    WindAgeRestrictedStatusNO,  //成年人，年龄不受限制
};

typedef enum : NSUInteger {
    WindAdult = 0,
    WindChildren = 1,
} WindAdultState;

typedef enum : NSUInteger {
    WindPersonalizedAdvertisingOn = 0,
    WindPersonalizedAdvertisingOff = 1,
} WindPersonalizedAdvertisingState;


typedef void(^WindAdDebugCallBack)(NSString *msg, WindLogLevel level);

@interface WindAds : NSObject

+ (NSString *)sdkVersion;

// 获取平台唯一ID，需要在一次广告请求后调研，否则返回为nil
+ (NSString *)getUid;

// Initialize Wind Ads SDK
+ (void) startWithOptions:(WindAdOptions *)options;

/// 初始化后，可以获得SdkToken
+ (NSString *)getSdkToken;

/**
 *   DeBug开关显示
 *
 *  @param enable true 开启debug，false 关闭debug
 */
+ (void)setDebugEnable:(BOOL)enable;

#pragma mark - CCPA SUPPORT
+ (void)updateCCPAStatus:(WindCCPAStatus)status;
+ (WindCCPAStatus)getCCPAStatus;

#pragma mark - GDPR SUPPORT
/**************************  GDPR  *********************************/
+ (WindConsentStatus)getUserGDPRConsentStatus;
+ (void)setUserGDPRConsentStatus:(WindConsentStatus)status;

#pragma mark - coppa SUPPORT
/**************************  Age *********************************/
+ (WindAgeRestrictedStatus)getAgeRestrictedStatus;
+ (void)setIsAgeRestrictedUser:(WindAgeRestrictedStatus)status;

#pragma mark - Adult SUPPORT
/**************************  设置是否是成年人 *********************************/
/// WindAdult: 成年人， WindChildren: 未成年人 default=WindAdult
+ (void)setAdult:(WindAdultState)state;
+ (WindAdultState)getAdultState;


#pragma mark - PersonalizedAdvertisin SUPPORT
/// WindPersonalizedAdvertisingOn: 开启个性化推荐， WindPersonalizedAdvertisingOff: 关闭个性化推荐, default=WindPersonalizedAdvertisingOn
+ (void)setPersonalizedAdvertising:(WindPersonalizedAdvertisingState)state;
+ (WindPersonalizedAdvertisingState)getPersonalizedAdvertisingState;

+ (NSUInteger)getUserAge;
+ (void)setUserAge:(NSUInteger)age;

@end
