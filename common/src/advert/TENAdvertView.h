//
//  TENAdvertView.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/10.
//

#import <Foundation/Foundation.h>
#import "TENAdvertSourceProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface TENAdvertView : NSObject<TENAdvertSourceProtocol>

- (instancetype)initWithCategroyType:(TENAdvertSourceCategroyType)categroyType;

- (void)loadWithPlacementId:(NSString *)placementId;

- (void)onActionCallback:(ActionCallback)callback;

@end

NS_ASSUME_NONNULL_END
