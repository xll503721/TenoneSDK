#import "TOTenOneSdk.h"
#include "tenone_sdk.h"
#include "tenone_ad_sdk.h"

@implementation TOTenOneSdk

+ (void)initAdAppId:(NSString *)appId {
    NSLog(@"appId is:%@", appId);
    TENONE_AD::TenoneAdSdk::GetInstance().Init("");
}

@end
