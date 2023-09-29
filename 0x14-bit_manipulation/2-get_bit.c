#include "main.h"
/**
 * get_bit - return one bit
 * @n: the number
 * @index: the position to read the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);

	tmp = n >> index;

	return (bit & 1);
}
