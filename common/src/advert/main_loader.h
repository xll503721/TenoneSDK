//
//  main_loader.h
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/11.
//

#ifndef TENONE_AD_SDK_MAIN_LOADER_H
#define TENONE_AD_SDK_MAIN_LOADER_H

#include "loader.h"

BEGIN_NAMESPACE_TENONE_AD

class MainLoader: public LoaderInterface {
private:
    std::shared_ptr<LoaderInterface> mainloader_;
    
public:
    MainLoader();
    MainLoader(std::shared_ptr<LoaderInterface> loader);
    void Start(const std::string& placement_id);
    void End();
    
    void RequestPlacement(const std::string& placement_id);
    void Flow(Placement* placement);
};

END_NAMESPACE_TENONE_AD

#endif /* TENONE_AD_SDK_MAIN_LOADER_H */
