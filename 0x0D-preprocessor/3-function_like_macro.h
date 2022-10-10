#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

/**
 * define - function head
 * ABS: macro name
 * Desc: Header file  defining a function-like macro ABS(x)
 *       which computes the absolute value of x.
 */

#define ABS(x) ((x) < 0 ? (-x) : (x))

#endif
