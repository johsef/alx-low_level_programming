#include "vairiadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: required argument
 *
 * Return: Sum of all argument passed to function
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res = 0;
	va_list al;

	va_start(al, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		res += va_arg(al, int);

	va_end(al);
	return (res);
}
