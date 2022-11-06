//
//  Loader.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/6.
//

#ifndef TENONE_AD_SDK_LOADER_H
#define TENONE_AD_SDK_LOADER_H

#include "water_fall.h"

BEGIN_NAMESPACE_TENONE_AD

class LoaderDelegate {
    virtual void PlacementWillLoad() = 0;
    virtual void PlacementDidLoad() = 0;
    virtual void PlacementDidLoadFail() = 0;
    
    virtual void WaterFallWillLoad() = 0;
    virtual void WaterFallDidLoad(WaterFall* water_fall) = 0;
    virtual void WaterFallDidLoadFail() = 0;
    
    virtual void HeaderBidWillLoad() {};
    virtual void HeaderBidDidLoad() {};
    virtual void HeaderBidDidLoadFail() {};
    
    virtual void AdSourceWillLoad() = 0;
    virtual void AdSourceDidLoad() = 0;
    virtual void AdSourceDidLoadFail() = 0;
};

class Loader {
    virtual void Start(const std::string& placement_id) = 0;
};

END_NAMESPACE_TENONE_AD

#endif /* TENONE_AD_SDK_LOADER_H */
