//
//  header_bid_loader.cc
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/12/3.
//

#include "header_bid_loader.h"

BEGIN_NAMESPACE_TENONE_AD

HeaderBidLoader::HeaderBidLoader(std::shared_ptr<LoaderInterface> loader): MainLoader(loader) {
    
}

void HeaderBidLoader::Start(const std::string& placement_id) {
    super_class::Start(placement_id);
    printf("HeaderBidLoader Start\n");
}

void HeaderBidLoader::End() {
    super_class::End();
};


END_NAMESPACE_TENONE_AD
