#import "TENOneSdk.h"

#include "tenone_sdk.h"
#include "tenone_ad_sdk.h"

@implementation TENOneSdk

+ (void)initAppId:(NSString *)appId type:(TENOneSdkType)type {
    switch (type) {
        case TENOneSdkTypeAdvert: {
            TENONE_AD::TenoneAdSdk::GetInstance().Init([appId UTF8String]);
        }
            break;
            
        default:
            break;
    }
}

@end
