//
//  TENApplication.m
//  TenOne
//
//  Created by li zhixuan on 2022/10/29.
//

#import "TENApplication.h"

@implementation TENApplication

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        [self addObserver];
    }
    return self;
}

- (void)addObserver {
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(applicationDidBecomeActiveNotification:) name:UIApplicationDidBecomeActiveNotification object:nil];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(applicationDidEnterBackgroundNotification:) name:UIApplicationDidEnterBackgroundNotification object:nil];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(applicationWillEnterForegroundNotification:) name:UIApplicationWillEnterForegroundNotification object:nil];
}

- (void)applicationDidBecomeActiveNotification:(NSNotification *)notification {
    
}

- (void)applicationDidEnterBackgroundNotification:(NSNotification *)notification {
    
}

- (void)applicationWillEnterForegroundNotification:(NSNotification *)notification {
    
}

@end
