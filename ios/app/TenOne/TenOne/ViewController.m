//
//  ViewController.m
//  Tenone
//
//  Created by li zhixuan on 2022/11/6.
//

#import "ViewController.h"
#import "TOTenOneSdk.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [TOTenOneSdk initAdAppId:@"123"];
}


@end
