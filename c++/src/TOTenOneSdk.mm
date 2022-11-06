#import "TOTenOneSdk.h"
#include "tenone_sdk.h"
#include "tenone_ad_sdk.h"

@implementation TOTenOneSdk

+ (void)initAdAppId:(NSString *)appId {
    const std::string app_id = [appId cStringUsingEncoding:NSUTF8StringEncoding];
    TENONE_AD::TenoneAdSdk::GetInstance().Init(app_id);
}

@end
