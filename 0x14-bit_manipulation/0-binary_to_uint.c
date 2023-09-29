#include "main.h"
/**
 * binary_to_uint - A function that converts binary numbers
 * to unsigned int
 * @b: pointer to binary numbers
 *
 * Return: converted number or 0 if otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int rem, num = 0, i = 0;
	unsigned int dec = 0;

	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		num = num * 10 + b[i] - '0';
		i++;
	}
	i = 0;
	while (num)
	{
		rem = num % 10;
		num = num / 10;
		dec = dec + (rem << i);
		i++;
	}
	return (dec);
}
