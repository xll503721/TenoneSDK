//
//  Loader.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/6.
//

#ifndef TENONE_AD_SDK_LOADER_H
#define TENONE_AD_SDK_LOADER_H

#include "water_fall.h"
#include "placement.h"
#include "header_bid.h"
#include "advert_source.h"

BEGIN_NAMESPACE_TENONE_AD

class LoaderDelegate {
    virtual void PlacementWillLoad() = 0;
    virtual void PlacementDidLoad(Placement* placement) = 0;
    virtual void PlacementDidLoadFail() = 0;
    
    virtual void WaterFallWillLoad() = 0;
    virtual void WaterFallDidLoad(WaterFall* water_fall) = 0;
    virtual void WaterFallDidLoadFail() = 0;
    
    virtual void HeaderBidWillLoad() {};
    virtual void HeaderBidDidLoad(HeaderBid* header_bid) {};
    virtual void HeaderBidDidLoadFail() {};
    
    virtual void AdvertSourceWillLoad() = 0;
    virtual void AdvertSourceDidLoad(AdvertSource* advert_source) = 0;
    virtual void AdvertSourceDidLoadFail() = 0;
};

class Loader {
    virtual void Start(const std::string& placement_id) = 0;
};

END_NAMESPACE_TENONE_AD

#endif /* TENONE_AD_SDK_LOADER_H */
