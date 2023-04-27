#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: integer number
 * @index: index of bit, starting at 0
 *
 * Return: Number either 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);
	tmp = n >> index;
	return (tmp & 1);
}
