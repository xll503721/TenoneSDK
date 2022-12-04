//
//  TENAdvertView.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TENAdvertSourceProtocol.h"
#import "TENAdvertCategory.h"

NS_ASSUME_NONNULL_BEGIN

@interface TENAdvertView : UIView

@property (nonatomic, strong) TENAdvertCategory *advertCategory;

@end

NS_ASSUME_NONNULL_END
