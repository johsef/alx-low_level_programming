#include "main.h"
/**
 * print_binary - decimal to binary without use / %
 * @n: the decimal number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int signal = 0;
	unsigned long int idx = 1;

	idx <<= 63;
	if (n == 0)
		_putchar('0');

	while (idx > 0)
	{
		if ((n & idx) == 0 && signal == 1)
			_putchar('0');
		if ((n & idx) != 0)
		{
			_putchar('1');
			signal = 1;
		}

		idx >>= 1;
	}
}

