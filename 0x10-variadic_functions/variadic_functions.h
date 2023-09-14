#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>


int sum_them_all(const unsigned int, ...);
void print_numbers(const char *s, const unsigned int, ...);
void print_all(const * const, ...);


#endif /*End of Variadic function file*/
