//
//  TenoneAdSdk.cc
//  TenoneSDK
//
//  Created by li zhixuan on 2022/11/5.
//

#include "tenone_ad_sdk.h"
#include "waterfall_loader.h"

BEGIN_NAMESPACE_TENONE_AD

TenoneAdSdk &TenoneAdSdk::GetInstance() {
    static TenoneAdSdk ad_sdk;
    return ad_sdk;
}

TenoneAdSdk::TenoneAdSdk() {
}

TenoneAdSdk::~TenoneAdSdk() {
}

void TenoneAdSdk::Init(const std::string& app_id) {
    printf("%s", app_id.c_str());
    
    
}

void TenoneAdSdk::LoadAdvert(const std::string& placement_id) {
    loader_ = std::make_shared<MainLoader>();
    std::shared_ptr<WaterfallLoader> waterfallLoader = std::make_shared<WaterfallLoader>(loader_);
    waterfallLoader->Start(placement_id);
}

END_NAMESPACE_TENONE_AD
