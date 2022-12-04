//
//  advert_source.cc
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/6.
//

#include "advert_source.h"

AdvertSource::AdvertSource() {
    name_ = "TENSigmobSource";
}

AdvertSource::~AdvertSource() {
    [(__bridge TENAdvertSource *)advert_source_ cPlusPlusRelease];
}

void AdvertSource::Load() {
    TENAdvertSource *advertSource = [[TENAdvertSource alloc] initWithName:[NSString stringWithUTF8String:name_.c_str()]];
    advert_source_ = [advertSource cPlusPlusRetain];
    [advertSource loadWithCategroyType:TENAdvertSourceCategroyTypeInterstitial requestType:TENAdvertSourceRequestTypeC2S userInfo:@{}];
}
