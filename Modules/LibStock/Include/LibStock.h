#ifndef LIB_STOCK_H
#define LIB_STOCK_H

#include "LibStockAPI.gen.h"

#ifdef __cplusplus
extern "C" {
#endif

LIB_STOCK_API int Add(int l, int r);
LIB_STOCK_API int Sub(int l, int r);
LIB_STOCK_API int Mul(int l, int r);
LIB_STOCK_API int Div(int l, int r);

#ifdef __cplusplus
}
#endif

#endif
