#include "main.h"
/**
 * is_prime_number -  a function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: number
 * Return: 1 if prime number, 0 othewise
 */
int is_prime_number(int n)
{
	int res;

	res = find_prime(2, n);
	return (res);
}
