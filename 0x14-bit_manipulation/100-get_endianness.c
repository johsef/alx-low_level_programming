#include "main.h"
/**
 * get_endianness - a function that checks endianess
 *
 * Return: 0 if big endian, 1 if big endian
 */
int get_endianness(void)
{
	int num = 1;

	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
