#import "TOTenOneSdk.h"
#include "tenone_sdk.h"
#include "tenone_ad_sdk.h"

@implementation TOTenOneSDK

+ (void)initAdAppId:(NSString *)appId {
    NSLog(@"appId is:%@", appId);
    TENONE_AD::TenoneAdSdk::GetInstance().Init("");
}

@end
