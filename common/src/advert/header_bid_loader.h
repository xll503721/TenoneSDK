//
//  header_bid_loader.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/12/3.
//

#ifndef TENONE_AD_SDK_HEADER_BID_LOADER_H
#define TENONE_AD_SDK_HEADER_BID_LOADER_H

#include "main_loader.h"

BEGIN_NAMESPACE_TENONE_AD

class HeaderBidLoader: public MainLoader {
    
private:
    using super_class = MainLoader;
    
public:
    HeaderBidLoader(std::shared_ptr<LoaderInterface> loader);
    void Start(const std::string& placement_id);
    void End();
};

END_NAMESPACE_TENONE_AD

#endif /* TENONE_AD_SDK_HEADER_BID_LOADER_H */
