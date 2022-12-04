//
//  TENAdvertSource.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/10.
//
#ifdef __OBJC__

#import <Foundation/Foundation.h>
#import "TENAdvertSourceProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface TENAdvertSource : NSObject

- (instancetype)initWithName:(NSString *)name;

@property (nonatomic, strong, readonly) NSString *name;

- (void)loadWithCategroyType:(TENAdvertSourceCategroyType)categroyType requestType:(TENAdvertSourceRequestType)requestType userInfo:(NSDictionary *)userInfo;

@end

NS_ASSUME_NONNULL_END

#endif
