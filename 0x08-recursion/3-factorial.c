#include "main.h"
/**
 * factorial -  a function that returns the length of a string
 * @n: number to find factorial
 * Return: result of factorial
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
