#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>


int sum_them_all(const unsigned int, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /*End of Variadic function file*/
