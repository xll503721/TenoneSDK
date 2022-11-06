//
//  ViewController.m
//  TenOne
//
//  Created by li zhixuan on 2022/10/29.
//

#import "TENMainViewController.h"
#include "tenone_sdk.h"
#import "TENApplication.h"
#import "TOTenOneSdk.h"

@interface TENMainViewController ()

@property (nonatomic, strong) TENApplication *application;

@end

@implementation TENMainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.application = [[TENApplication alloc] init];
    [TOTenOneSDK initAdAppId:@"123"];
}


@end
