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

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Do any additional setup after loading the view.
    [TENOneSdk initAdAppId:@"123" type:TENOneSdkTypeAdvert];
    
    TENAdvertView *view = [[TENAdvertView alloc] initWithFrame:CGRectZero];
    TENAdvertCategory *category = [[TENAdvertCategory alloc] initWithPlacementId:@""];
    view.advertCategory = category;
    [category onActionCallback:^{
        
    }];
    [category load];
    
    [self.view addSubview:view];
}


@end
