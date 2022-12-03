//
//  TENAdvertSource.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/10.
//

typedef NS_ENUM(NSUInteger, TENAdvertSourceCategroyType) {
    TENAdvertSourceCategroyTypeSplash,
    TENAdvertSourceCategroyTypeInterstitial,
    TENAdvertSourceCategroyTypeBanner,
    TENAdvertSourceCategroyTypeRewardedVideo,
    TENAdvertSourceCategroyTypeNative,
};

@protocol TENAdvertSourceProtocol <NSObject>

@required

//- (instancetype)initWithPlacementId:(NSString *)placementId;

//- (void)onActionCallback:(ActionCallback)callback;

@end
