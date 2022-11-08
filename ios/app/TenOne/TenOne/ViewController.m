//
//  ViewController.m
//  Tenone
//
//  Created by li zhixuan on 2022/11/6.
//

#import "ViewController.h"
#import "TENOneSdk.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [TENOneSdk initAdAppId:@"123"];
    NSString *appId = @"90010";
    [KSAdSDKManager setAppId:appId];
    [KSAdSDKManager setLoglevel:KSAdSDKLogLevelOff];
}


@end
