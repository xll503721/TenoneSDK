//
//  main_loader.cc
//  tenone_ad_sdk
//
//  Created by li zhixuan on 2022/11/11.
//

#include "main_loader.h"

BEGIN_NAMESPACE_TENONE_AD

MainLoader::MainLoader() {
}

MainLoader::MainLoader(std::shared_ptr<LoaderInterface> loader)
:mainloader_(loader) {
}

void MainLoader::Start(const std::string& placement_id) {
    if (mainloader_) {
        mainloader_->Start(placement_id);
    }
}

void MainLoader::End() {
    if (mainloader_) {
        mainloader_->End();
    }
}

void MainLoader::RequestPlacement(const std::string& placement_id) {
    if (mainloader_) {
        mainloader_->RequestPlacement(placement_id);
    }
}

void MainLoader::Flow(Placement* placement) {
    if (mainloader_) {
        mainloader_->Flow(placement);
    }
}

END_NAMESPACE_TENONE_AD
