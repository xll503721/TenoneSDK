#include "ten_one_sdk.h"
#include "TENApplication.h"
#include "platform_macros.h"

void TenOne::test() {
    printf("hello world");
#if defined(OS_IOS)
    printf("ios");
#endif
}
