#include "main.h"
/**
  *print_most_numbers- Function that prints numbers from 0 to 9
  *
  *
  */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
