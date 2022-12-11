//
//  TenoneAdSdk.h
//  TenoneSDK
//
//  Created by li zhixuan on 2022/11/5.
//

#ifndef TENONE_AD_SDK_H
#define TENONE_AD_SDK_H

#include "main_loader.h"

BEGIN_NAMESPACE_TENONE_AD

class TenoneAdSdk {
    
public:
    static TenoneAdSdk &GetInstance();
    void Init(const std::string& app_id);
    void LoadAdvert(const std::string& placement_id, void* delegate);
    
private:
    TenoneAdSdk();
    ~TenoneAdSdk();

    TenoneAdSdk(const TenoneAdSdk &ad_sdk);
    TenoneAdSdk &operator=(const TenoneAdSdk &ad_sdk);
private:
    std::shared_ptr<LoaderInterface> loader_;
};

END_NAMESPACE_TENONE_AD

#endif /* TENONE_AD_SDK_H */
