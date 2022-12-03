//
//  TENAdvertCategory.m
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/11.
//

#import "TENAdvertCategory.h"

#include "tenone_ad_sdk.h"

@interface TENAdvertCategory ()

@end

@implementation TENAdvertCategory

- (instancetype)initWithPlacementId:(NSString *)placementId {
    self = [super init];
    if (self) {
        _placementId = [placementId copy];
    }
    return self;
}

- (void)loadWithError:(NSError *)error {
    if (!self.placementId) {
        return;
    }
}

- (void)onActionCallback:(ActionCallback)callback {
}

- (void)load {
    TENONE_AD::TenoneAdSdk::GetInstance().LoadAdvert(self.placementId.UTF8String);
}

@end
