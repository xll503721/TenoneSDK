//
//  SMAdLogManager.h
//  WindFoundation
//
//  Created by Codi on 2021/10/20.
//

#import <Foundation/Foundation.h>

static NSString *const SM_ADTYPE = @"adtype";
static NSString *const SM_CATEGORY = @"category";
static NSString *const SM_SUB_CATEGORY = @"sub_category";
static NSString *const SM_USER_ID = @"user_id";
static NSString *const SM_TIMESTAMP = @"timestamp";

@interface SMAdLogManager : NSObject

@property(nonatomic, assign) NSInteger sendLogInterval;
@property(nonatomic, assign) uint32_t maxSendLogRecords;
@property (nonatomic,copy) NSString *log;

@property (nonatomic, assign) BOOL isRequestInEea;//default NO
@property (nonatomic, assign) NSUInteger consentType;//1：同意; 2: 拒绝；


+ (instancetype)sharedInstance;

- (void)addLogWithAcType:(NSUInteger)acType params:(NSDictionary *)params;

- (void)startDCLogService;


@end
