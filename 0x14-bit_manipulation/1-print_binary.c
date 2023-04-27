#include "main.h"
/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: number to be converted
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int range = 2147483648;

xy:
	if (range > 0)
	{
		if ((n & range) == 0)
		{
			range = range >> 1;
			goto xy;
		}
		else
			while (range > 0)
			{
				if ((n & range) == 0)
					_putchar(48);
				else
					_putchar(49);
				range = range >> 1;
			}
	}
}
