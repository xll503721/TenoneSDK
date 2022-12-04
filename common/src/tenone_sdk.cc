#include "tenone_sdk.h"
#include "TENApplication.h"

void TenOne::test() {
    printf("hello world");
#if defined(OS_IOS)
    printf("ios");
#endif
}
