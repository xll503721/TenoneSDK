//
//  TENAdvertSource.m
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/10.
//

#import "TENAdvertSource.h"
#import "TENSigmobSource.h"

@interface TENAdvertSource ()

@property (nonatomic, strong) id<TENAdvertSourceProtocol> advertSource;

@end

@implementation TENAdvertSource

- (instancetype)initWithName:(NSString *)name
{
    self = [super init];
    if (self) {
        _name = name;
        Class advertSource = NSClassFromString(name);
        _advertSource = [[advertSource alloc] init];
    }
    return self;
}

- (void)loadWithCategroyType:(TENAdvertSourceCategroyType)categroyType requestType:(TENAdvertSourceRequestType)requestType userInfo:(NSDictionary *)userInfo {
    switch (categroyType) {
        case TENAdvertSourceCategroyTypeInterstitial: {
            [self.advertSource loadInterstitialWithType:requestType userInfo:userInfo];
        }
            break;
            
        default:
            break;
    }
}

- (void)load {
    
}

@end
