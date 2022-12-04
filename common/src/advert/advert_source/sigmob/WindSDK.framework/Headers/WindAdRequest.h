//
//  SMRequest.h
//  SigmobDemo
//
//  Created by happyelements on 04/04/2018.
//  Copyright © 2018 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WindAdRequest : NSObject

@property (nonatomic,copy) NSString *placementId;

@property (nonatomic,copy) NSString *userId;

//做为扩展参数使用
@property (nonatomic,strong) NSDictionary<NSString *, NSString *> *options;

+ (instancetype)request;

@end
