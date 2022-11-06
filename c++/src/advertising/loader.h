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
    virtual void PlacementDidLoadFailed() = 0;
    
    virtual void WaterFallWillLoad() = 0;
    virtual void WaterFallDidLoad(WaterFall* water_fall) = 0;
    virtual void WaterFallDidLoadFailed() = 0;
    
    virtual void HeaderBidWillLoad() {};
    virtual void HeaderBidDidLoad(WaterFall* water_fall) {};
    virtual void HeaderBidDidLoadFailed(WaterFall* water_fall) {};
}

class Loader {
    virtual void method(WaterFall* water_fall) = 0;
};

END_NAMESPACE_TENONE_AD

#endif /* TENONE_AD_SDK_LOADER_H */
