//
//  WindNativeAd.h
//  WindSDK
//
//  Created by Codi on 2021/11/2.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, WindFeedADMode) {
    WindFeedADModeSmallImage = 2,
    WindFeedADModeLargeImage = 3,
    WindFeedADModeNativeExpress = 4,
    WindFeedADModeVideo = 14,
    WindFeedADModeVideoPortrait = 15,
    WindFeedADModeVideoLandSpace = 16,
};


@interface WindNativeAd : NSObject


/// Typed access to the ad title.
@property (nonatomic, copy, readonly) NSString *title;

/// Typed access to the body text, usually a longer description of the ad.
@property (nonatomic, copy, readonly) NSString *desc;

/// Typed access to the ad icon.
@property (nonatomic, copy, readonly) NSString *iconUrl;

/// Typed access to the call to action phrase of the ad.
@property (nonatomic, copy, readonly) NSString *callToAction;

/// Typed access to the ad star rating.
@property (nonatomic, assign, readonly) double rating;

@property (nonatomic, assign, readonly) WindFeedADMode feedADMode;

@end
