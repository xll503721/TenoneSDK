//
//  NSObject+WindConverter.h
//  WindFoundation
//
//  Created by Codi on 2022/6/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WADStrategy;

@interface NSObject (WindConverter)

@property (nonatomic, weak) UIView *windView;

@property (nonatomic, strong) WADStrategy *wind_strategy;


@end

