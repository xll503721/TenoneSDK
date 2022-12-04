//
//  TENAdvertCategory.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^ActionCallback) (void);

@interface TENAdvertCategory : NSObject

@property (nonatomic, readonly) NSString *placementId;

- (instancetype)initWithPlacementId:(NSString *)placementId;

- (void)onActionCallback:(ActionCallback)callback;

- (void)load;
- (void)show;

@end

NS_ASSUME_NONNULL_END
