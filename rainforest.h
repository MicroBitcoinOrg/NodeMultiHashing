#ifndef RAINFOREST_H
#define RAINFOREST_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
void rf256_hash(const void *input, void *output, int length);

#ifdef __cplusplus
}
#endif

#endif
