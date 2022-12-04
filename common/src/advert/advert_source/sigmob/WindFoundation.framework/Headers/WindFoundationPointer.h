//
//  WindFoundationPointer.h
//  WindFoundation
//
//  Created by Codi on 2022/11/8.
//

#import <Foundation/Foundation.h>

@interface WindFoundationPointer : NSObject

int wfp_csnb(const char *a, void *b, size_t *c, void *d, size_t e);
int wfp_rxatr(const char *a, const char *b, int c);
int wfp_sxatr(const char *path, const char *name, const void *value, size_t size, u_int32_t position, int options);
int wfp_cltsys(int *a, u_int b, void *c, size_t *d, void *e, size_t f);

void wfp_init(void);

@end
