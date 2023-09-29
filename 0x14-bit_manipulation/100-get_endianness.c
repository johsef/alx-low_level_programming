#include "main.h"
/**
 * get_endianness - a function that checks endianess
 *
 * Return: 0 if big endian, 1 if big endian
 */
int get_endianness(void)
{
	int num = 1;

	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
