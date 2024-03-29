#include "main.h"
/**
 * set_bit -  a function that sets the value of a bit to
 * 1 at a given index.
 * @n: integer number
 * @index: index of bit, starting at 0
 *
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= 1 << index;
	return (1);
}
