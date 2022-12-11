//
//  ViewController.m
//  Tenone
//
//  Created by li zhixuan on 2022/11/6.
//

#import "ViewController.h"
#import "TENOneSdk.h"
#import "TENAdvertView.h"
#import "TENAdvertCategory.h"
#import "TENAdSDK.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Do any additional setup after loading the view.
    [TENOneSdk initAppId:@"123" type:TENOneSdkTypeAdvert];
    
    [[TENAdSDK defalutAdSDK] loadWithPlacementId:@"" category:TENAdvertSourceCategroyTypeBanner completionHandler:^(TENAdvertView * _Nonnull view, TENAdvertSourceCategroyLoadStatusType type, NSDictionary<id,id> * _Nonnull userInfo) {
        
    }];
    
//    TENAdvertView *view = [[TENAdvertView alloc] initWithFrame:CGRectZero];
//    TENAdvertCategory *category = [[TENAdvertCategory alloc] initWithPlacementId:@""];
//    view.advertCategory = category;
//    [category onActionCallback:^{
//
//    }];
//    [category load];
}


@end
