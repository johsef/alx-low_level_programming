#include "main.h"
/**
 * find_prime - a function that finds prime of a number
 * @a: number to find prime
 * @t: test value
 * Return: prime number
 */
int find_prime(int a, int t)
{
	if (t <= 1)
		return (0);
	if (t == 2)
		return (1);
	if (a != t)
	{
		if ((t % a) != 0)
		{
			return (1);
			find_prime(a + 1, t);
		}
		else
			return (0);
	}
	return (0);
}
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
