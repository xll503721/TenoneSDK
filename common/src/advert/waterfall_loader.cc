//
//  waterfall_loader.cc
//  TenoneSDK
//
//  Created by li zhixuan on 2022/11/5.
//

#include "waterfall_loader.h"

BEGIN_NAMESPACE_TENONE_AD

WaterfallLoader::WaterfallLoader(std::shared_ptr<LoaderInterface> loader):MainLoader(loader) {
    
}

void WaterfallLoader::Start(const std::string& placement_id) {
    super_class::Start(placement_id);
    printf("WaterfallLoader Start\n");
}

void WaterfallLoader::End() {
    super_class::End();
};


END_NAMESPACE_TENONE_AD
