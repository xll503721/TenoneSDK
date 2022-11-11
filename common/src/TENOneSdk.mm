#import "TENOneSdk.h"
#import "TENHyBidSource.h"

#include "tenone_sdk.h"
#include "tenone_ad_sdk.h"

@implementation TENOneSdk

+ (void)initAdAppId:(NSString *)appId {
    const std::string app_id = [appId cStringUsingEncoding:NSUTF8StringEncoding];
    TENONE_AD::TenoneAdSdk::GetInstance().Init(app_id);
    
    TENHyBidSource *hyBidSource = [[TENHyBidSource alloc] init];
//    [hyBidSource loadWithCategroyType:TENAdvertSourceCategroyTypeBanner];
}

@end
