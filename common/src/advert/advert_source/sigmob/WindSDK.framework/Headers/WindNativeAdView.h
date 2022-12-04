//
//  WindNativeAdView.h
//  WindSDK
//
//  Created by Codi on 2021/11/2.
//

#import <UIKit/UIKit.h>

@class WindNativeAd;
@class WindDislikeWords;
@class WindNativeAdView;
@class WindMediaView;
@class WindLogoView;

typedef NS_ENUM(NSUInteger, WindMediaPlayerStatus) {
    WindMediaPlayerStatusInitial = 0,         // 初始状态
    WindMediaPlayerStatusLoading = 1,         // 加载中
    WindMediaPlayerStatusStarted = 2,         // 开始播放
    WindMediaPlayerStatusPaused = 3,          // 用户行为导致暂停
    WindMediaPlayerStatusError = 4,           // 播放出错
    WindMediaPlayerStatusStoped = 5,          // 播放停止
};


@protocol WindNativeAdViewDelegate <NSObject>

@optional
/**
 广告曝光回调

 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdViewWillExpose:(WindNativeAdView *)nativeAdView;


/**
 广告点击回调

 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdViewDidClick:(WindNativeAdView *)nativeAdView;


/**
 广告详情页关闭回调

 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdDetailViewClosed:(WindNativeAdView *)nativeAdView;


/**
 广告详情页面即将展示回调

 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdDetailViewWillPresentScreen:(WindNativeAdView *)nativeAdView;


/**
 视频广告播放状态更改回调

 @param nativeAdView WindNativeAdView 实例
 @param status 视频广告播放状态
 @param userInfo 视频广告信息
 */
- (void)nativeAdView:(WindNativeAdView *)nativeAdView playerStatusChanged:(WindMediaPlayerStatus)status userInfo:(NSDictionary *)userInfo;


/**
 点击dislike回调
 开发者需要在这个回调中移除视图，否则，会出现用户点击叉无效的情况
 
 @param filterWords : 选择不喜欢的原因
 */
- (void)nativeAdView:(WindNativeAdView *)nativeAdView dislikeWithReason:(NSArray<WindDislikeWords *> *)filterWords;



@end


@interface WindNativeAdView : UIView

/**
 广告 View 时间回调对象
 */
@property (nonatomic, weak) id<WindNativeAdViewDelegate> delegate;

@property (nonatomic, strong, readonly) WindNativeAd *nativeAd;

/*
 *  viewControllerForPresentingModalView
 *  详解：开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *viewController;


/**
 视频组件
 */
@property (nonatomic, strong, readonly) WindMediaView *mediaView;

/**
 广告平台logo组件
 */
@property (nonatomic, strong, readonly) UIView *logoView;

/**
 dislike组件
 */
@property (nonatomic, strong, readonly) UIButton *dislikeButton;


- (instancetype)initWithFrame:(CGRect)frame;

/**
 每次获取物料信息后需要刷新调用refreshData:方法
 */
- (void)refreshData:(WindNativeAd *)nativeAd;


/**
 * 绑定展示的图片视图
 *
 * (需要在refreshData方法之后绑定，否则数据无法渲染)
 *
 * @param imageViews     进行渲染的 imageView
 * @param placeholder     图片加载过程中的占位图
 */
- (void)bindImageViews:(NSArray<UIImageView *> *)imageViews placeholder:(UIImage *)placeholder;

/**
 在物料加载成功方法里获取相关广告信息赋值后，需调用 setClickableViews:绑定点击的View
 */
- (void)setClickableViews:(NSArray<UIView *> *)clickableViews;

/**
 注销数据对象，在 tableView、collectionView 等场景需要复用 WindNativeAdView 时，
 需要在合适的时机，例如 cell 的 prepareForReuse 方法内执行 unregisterDataObject 方法，
 将广告对象与 WindNativeAdView 解绑
 */
- (void)unregisterDataObject;

@end
