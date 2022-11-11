//
//  TENAdvertView.m
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/10.
//

#import "TENAdvertView.h"

#include "tenone_ad_sdk.h"

@interface TENAdvertView() {
    
}

@property (nonatomic, strong) ActionCallback actionCallback;

@end

@implementation TENAdvertView

- (instancetype)initWithCategroyType:(TENAdvertSourceCategroyType)categroyType {
    self = [super init];
    if (self) {
        
    }
    return self;
}

- (void)loadWithPlacementId:(NSString *)placementId {
    TENONE_AD::TenoneAdSdk::GetInstance().Init("");
}

- (void)onActionCallback:(ActionCallback)callback {
}
    

@end
