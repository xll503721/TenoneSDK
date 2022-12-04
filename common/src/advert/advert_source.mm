//
//  advert_source.cc
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/6.
//

#include "advert_source.h"
#include "TENAdvertSource.h"

AdvertSource::AdvertSource() {
    
}

void AdvertSource::Load() {
    TENAdvertSource *advertSource = [[TENAdvertSource alloc] initWithName:@"TENSigmobSource"];
    [advertSource loadWithCategroyType:TENAdvertSourceCategroyTypeInterstitial requestType:TENAdvertSourceRequestTypeC2S userInfo:@{}];
}
