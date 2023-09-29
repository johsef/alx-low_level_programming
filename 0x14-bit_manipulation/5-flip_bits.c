#include "main.h"

int countSetBits(unsigned long int);
/**
 * flip_bits - a function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: integer number to change
 * @m: integer number to be chnged to
 *
 * Return: Number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}

/**
 * countSetBits- a function that counts number of set bits.
 * @n: integer number
 *
 * Return: Number of set bit
 */
int countSetBits(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		n &= (n - 1);
		count++;
	}
	return (count);
}
