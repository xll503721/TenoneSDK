//
//  WindIntersititialAd.h
//  WindSDK
//
//  Created by Codi on 2021/11/2.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WindBiddingProtocol.h"

@class WindAdRequest;

@class WindIntersititialAd;

@protocol WindIntersititialAdDelegate<NSObject>

@optional
/**
 This method is called when video ad material loaded successfully.
 */
- (void)intersititialAdDidLoad:(WindIntersititialAd *)intersititialAd;

/**
 This method is called when video ad materia failed to load.
 @param error : the reason of error
 */
- (void)intersititialAdDidLoad:(WindIntersititialAd *)intersititialAd didFailWithError:(NSError *)error;

/**
 This method is called when video ad slot will be showing.
 */
- (void)intersititialAdWillVisible:(WindIntersititialAd *)intersititialAd;

/**
 This method is called when video ad slot has been shown.
 */
- (void)intersititialAdDidVisible:(WindIntersititialAd *)intersititialAd;

/**
 This method is called when video ad is clicked.
 */
- (void)intersititialAdDidClick:(WindIntersititialAd *)intersititialAd;

/**
 This method is called when video ad is clicked skip button.
 */
- (void)intersititialAdDidClickSkip:(WindIntersititialAd *)intersititialAd;

/**
 This method is called when video ad is about to close.
 */
- (void)intersititialAdDidClose:(WindIntersititialAd *)intersititialAd;

/**
 This method is called when video ad play completed or an error occurred.
 @param error : the reason of error
 */
- (void)intersititialAdDidPlayFinish:(WindIntersititialAd *)intersititialAd didFailWithError:(NSError *)error;

/**
 This method is called when return ads from sigmob ad server.
 */
- (void)intersititialAdServerResponse:(WindIntersititialAd *)intersititialAd isFillAd:(BOOL)isFillAd;

@end

@interface WindIntersititialAd : NSObject<WindBiddingProtocol>

@property (nonatomic, weak) id<WindIntersititialAdDelegate> delegate;

@property (nonatomic, strong, readonly) NSString *placementId;

@property (nonatomic, getter=isAdReady, readonly) BOOL ready;

@property (nonatomic, strong) NSDictionary *extra;


/// 插屏 全屏广告
/// - Parameter request: 请求对象WindAdRequest
- (instancetype)initWithRequest:(WindAdRequest *)request;


/// 插屏 非全屏广告
/// - Parameter request: 请求对象WindAdRequest
- (instancetype)initNewInterstitialWithRequest:(WindAdRequest *)request;

/**
*  Called when load the ad
*
*/
- (void)loadAdData;


/**
*  Called when load the ad
*
*  @param bidToken    - the token from bid request within Sigmob Ad Server
*/
- (void)loadAdDataWithBidToken:(NSString *)bidToken;

/**
 Display video ad.
 @param rootViewController : root view controller for displaying ad.
 @param extras : Extended parameters for displaying ad.
 */
- (void)showAdFromRootViewController:(UIViewController *)rootViewController
                             options:(NSDictionary<NSString *, NSString *> *)extras;

@end

