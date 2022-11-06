//
//  TenoneAdSdk.cc
//  TenoneSDK
//
//  Created by li zhixuan on 2022/11/5.
//

#include "tenone_ad_sdk.h"

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
}

END_NAMESPACE_TENONE_AD
