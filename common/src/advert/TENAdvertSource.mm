//
//  TENAdvertSource.m
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/10.
//

#import "TENAdvertSource.h"
#import "TENSigmobSource.h"

typedef void (^RetainBlock) (void);

@interface TENAdvertSource ()<TENAdvertSourceDelegate>

@property (nonatomic, strong) id<TENAdvertSourceProtocol> advertSource;
@property (nonatomic, strong) RetainBlock retainBlock;

@end

@implementation TENAdvertSource

- (void)dealloc
{
    NSLog(@"TENAdvertSource dealloc");
}

- (instancetype)initWithName:(NSString *)name
{
    self = [super init];
    if (self) {
        _name = name;
        Class advertSource = NSClassFromString(name);
        _advertSource = [[advertSource alloc] initWithDelegate:self userInfo:nil];
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-retain-cycles"
        self.retainBlock = ^{
            [self class];
        };
#pragma clang diagnostic pop
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

- (void)adDidLoadWithCategroyType:(TENAdvertSourceCategroyType)categroyType error:(NSError *)error {
    
}

- (void *)cPlusPlusRetain {
    self.retainBlock();
    return (__bridge void *)self;
}

- (void)cPlusPlusRelease {
    self.retainBlock = nil;
}

@end
