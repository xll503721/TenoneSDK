//
//  advert_source.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/6.
//

#ifndef TENONE_AD_SDK_ADVERT_SOURCE_H
#define TENONE_AD_SDK_ADVERT_SOURCE_H

#include "TENAdvertSource.h"

class AdvertSource {
    
private:
    std::string name_;
    void* advert_source_;
    
public:
    AdvertSource();
    ~AdvertSource();
    void Load();
};

#endif /* TENONE_AD_SDK_ADVERT_SOURCE_H */
