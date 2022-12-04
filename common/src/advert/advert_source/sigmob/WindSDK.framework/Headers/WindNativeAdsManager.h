//
//  WindNativeAdsManager.h
//  WindSDK
//
//  Created by Codi on 2021/11/2.
//

#import <Foundation/Foundation.h>
#import "WindBiddingProtocol.h"

@class WindAdRequest;
@class WindNativeAd;
@class WindNativeAdsManager;

@protocol WindNativeAdsManagerDelegate <NSObject>

@optional

- (void)nativeAdsManagerSuccessToLoad:(WindNativeAdsManager *)adsManager nativeAds:(NSArray<WindNativeAd *> *)nativeAdDataArray;;

- (void)nativeAdsManager:(WindNativeAdsManager *)adsManager didFailWithError:(NSError *)error;

@end


@interface WindNativeAdsManager : NSObject<WindBiddingProtocol>

@property (nonatomic, weak) id<WindNativeAdsManagerDelegate> delegate;

@property (nonatomic, strong, readonly) NSString *placementId;

@property (nonatomic, strong) NSDictionary *extra;

- (instancetype)initWithRequest:(WindAdRequest *)request;

/**
*  Called when load the ad
*
*  @param count         - It is recommended to request no more than 3 ads.
*/
- (void)loadAdDataWithCount:(NSInteger)count;

/**
*  Called when load the ad
*
*  @param bitToken      - the token from bid request within Sigmob Ad Server
*
*  @param count         - It is recommended to request no more than 3 ads.
*/
- (void)loadAdDataWithBitToken:(NSString *)bitToken
                       adCount:(NSInteger)count;


@end


