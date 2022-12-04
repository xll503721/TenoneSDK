//
//  TENSigmobSource.m
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/6.
//

#import "TENSigmobSource.h"

#define AppId @"6877"//应用ID
#define AppKey @"eccdcdbd9adbd4a7"//应用key
#define FullScreenVideoAdPlacementId @"f21b862c1cd"//插屏广告位ID

@interface TENSigmobSource ()<WindIntersititialAdDelegate>

@property (nonatomic, strong) WindIntersititialAd *intersititialAd;
@property (nonatomic, strong) WindSplashAdView *splashAdView;
@property (nonatomic, strong) WindNativeAdsManager *nativeAdsManager;
@property (nonatomic, strong) WindRewardVideoAd *rewardVideoAd;

@property (nonatomic, weak) id<TENAdvertSourceDelegate> delegate;

@end

@implementation TENSigmobSource

- (instancetype)initWithDelegate:(id<TENAdvertSourceDelegate>)delegate userInfo:(NSDictionary<id, id> *)userInfo
{
    self = [super init];
    if (self) {
        _delegate = delegate;
        WindAdOptions *option = [[WindAdOptions alloc] initWithAppId:AppId appKey:AppKey];
        [WindAds startWithOptions:option];
    }
    return self;
}

#pragma mark - Interstitial
- (void)loadInterstitialWithType:(TENAdvertSourceRequestType)type userInfo:(NSDictionary *)userInfo {
    WindAdRequest *request = [WindAdRequest request];
    request.userId = @"user_id";
    request.placementId = FullScreenVideoAdPlacementId;
    
    self.intersititialAd = [[WindIntersititialAd alloc] initWithRequest:request];
    self.intersititialAd.delegate = self;
    if (type == TENAdvertSourceRequestTypeS2S) {
        [self.intersititialAd loadAdDataWithBidToken:[WindAds getSdkToken]];
        return;
    }
    if (type == TENAdvertSourceRequestTypeC2S) {
        [self.intersititialAd setCurrency:@"USD"];
        [self.intersititialAd setBidFloor:100];
    }
    [self.intersititialAd loadAdData];
}

#pragma mark - Interstitial Delegate
- (void)intersititialAdDidLoad:(WindIntersititialAd *)intersititialAd {
    if (self.delegate && [self.delegate respondsToSelector:@selector(adDidLoadWithCategroyType:error:)]) {
        [self.delegate adDidLoadWithCategroyType:TENAdvertSourceCategroyTypeInterstitial error:nil];
    }
}

- (void)intersititialAdDidLoad:(WindIntersititialAd *)intersititialAd didFailWithError:(NSError *)error {
    if (self.delegate && [self.delegate respondsToSelector:@selector(adDidLoadWithCategroyType:)]) {
        [self.delegate adDidLoadWithCategroyType:TENAdvertSourceCategroyTypeInterstitial error:error];
    }
}

#pragma mark - Splash
- (void)loadSplashWithType:(TENAdvertSourceRequestType)type userInfo:(NSDictionary<id, id> *)userInfo {
    
}

#pragma mark - Banner
- (void)loadBannerWithType:(TENAdvertSourceRequestType)type userInfo:(NSDictionary<id, id> *)userInfo {
    
}

#pragma mark - RewardedVideo
- (void)loadRewardedVideoWithType:(TENAdvertSourceRequestType)type userInfo:(NSDictionary<id, id> *)userInfo {
    
}

#pragma mark - Navite
- (void)loadNaviteWithType:(TENAdvertSourceRequestType)type userInfo:(NSDictionary<id, id> *)userInfo {
    
}

#pragma mark - Send Win Loss
- (void)sendWinNotificationWithType:(TENAdvertSourceCategroyType)categroyType userInfo:(NSDictionary *)userInfo {
    id<WindBiddingProtocol> ad = nil;
    switch (categroyType) {
        case TENAdvertSourceCategroyTypeSplash: {
            ad = self.splashAdView;
        }
            break;
        case TENAdvertSourceCategroyTypeInterstitial: {
            ad = self.splashAdView;
        }
            break;
        case TENAdvertSourceCategroyTypeRewardedVideo: {
            ad = self.splashAdView;
        }
            break;
        case TENAdvertSourceCategroyTypeNative: {
            ad = self.nativeAdsManager;
        }
            break;
            
        default:
            break;
    }
    [ad sendWinNotificationWithInfo:@{}];
}

- (void)sendLossNotificationWithType:(TENAdvertSourceCategroyType)categroyType userInfo:(NSDictionary *)userInfo {
    id<WindBiddingProtocol> ad = nil;
    switch (categroyType) {
        case TENAdvertSourceCategroyTypeSplash: {
            ad = self.splashAdView;
        }
            break;
        case TENAdvertSourceCategroyTypeInterstitial: {
            ad = self.intersititialAd;
        }
            break;
        case TENAdvertSourceCategroyTypeRewardedVideo: {
            ad = self.rewardVideoAd;
        }
            break;
        case TENAdvertSourceCategroyTypeNative: {
            ad = self.nativeAdsManager;
        }
            break;
            
        default:
            break;
    }
    [ad sendLossNotificationWithInfo:@{}];
}

@end
