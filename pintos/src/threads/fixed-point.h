#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

typedef int FP;
#define P 17
#define Q 14
#define F 1 << (Q)


//n is integer, F is fraction.
#define FP_CONVERT(n)  (n)*(F)
#define FP_CONVERT_TO_INT(x) ((x) >= 0 ? ((x) + (F) / 2) / (F) : ((x) - (F) / 2) / (F))
#define ADD(x, y) (x)+(y)
#define ADD_INT(x, n) (x)+(n) * (F)
#define SUB(x, y) (x)-(y)
#define SUB_INT(x, n) (x)-(n)*(F)
#define MUL(x, y) ((int64_t)(x))*(y)/(F)
#define MUL_INT(x, n) (x)*(n)
#define DIV(x, y) ((int64_t)(x))*(F)/(y)
#define DIV_INT(x, n) (x)/(n)

#endif
