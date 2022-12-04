//
//  WindSplashAdView.h
//  WindSDK
//
//  Created by Codi on 2021/11/4.
//

#import <UIKit/UIKit.h>
#import "WindBiddingProtocol.h"

@class WindAdRequest;
@class WindSplashAdView;

@protocol WindSplashAdViewDelegate <NSObject>

@optional
/**
 *  开屏广告素材加载成功
 */
- (void)onSplashAdDidLoad:(WindSplashAdView *)splashAdView;

/**
 *  开屏广告展示失败
 */
-(void)onSplashAdLoadFail:(WindSplashAdView *)splashAdView error:(NSError *)error;

/**
 *  开屏广告成功展示
 */
-(void)onSplashAdSuccessPresentScreen:(WindSplashAdView *)splashAdView;

/**
 *  开屏广告展示失败
 */
-(void)onSplashAdFailToPresent:(WindSplashAdView *)splashAdView withError:(NSError *)error;


/**
 *  开屏广告点击回调
 */
- (void)onSplashAdClicked:(WindSplashAdView *)splashAdView;


/**
 *  开屏广告点击跳过
 */
- (void)onSplashAdSkiped:(WindSplashAdView *)splashAdView;

/**
 *  开屏广告关闭回调
 */
- (void)onSplashAdClosed:(WindSplashAdView *)splashAdView;

@end

@interface WindSplashAdView : UIView<WindBiddingProtocol>

@property (nonatomic,weak) id<WindSplashAdViewDelegate> delegate;

@property (nonatomic,strong, readonly) NSString *placementId;

@property (nonatomic, weak) UIViewController *rootViewController;

@property (nonatomic, strong) NSDictionary *extra;
/**
 *  拉取广告超时时间，默认为5秒
 */
@property (nonatomic, assign) int fetchDelay;

/**
 广告是否有效
 广告加载后存在一定的时效性，在展示前请先验证adValid
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;


- (instancetype)initWithRequest:(WindAdRequest *)request;

/// load ad data
- (void)loadAdData;


/**
*  Called when load ad data
*
*  @param bidToken    - the token from bid request within Sigmob Ad Server
*/
- (void)loadAdDataWithBidToken:(NSString *)bidToken;

@end
