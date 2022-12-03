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
@property (nonatomic, copy) NSString *placementId;

@end

@implementation TENAdvertView

- (void)loadWithPlacementId:(NSString *)placementId {
}

#pragma mark - uiview

- (void)didMoveToWindow {
    [super didMoveToWindow];
}

#pragma mark - setter getter
- (void)setAdvertCategory:(TENAdvertCategory *)advertCategory {
    if (!advertCategory.placementId) {
        return;
    }
    _advertCategory = advertCategory;
}
    

@end
