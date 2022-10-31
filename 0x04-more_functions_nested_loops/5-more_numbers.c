#include "main.h"
/**
  *more_number - A function that prints 10 times the numbers, from 0 to 14
  *
  *
  *
  */
void more_number(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 48;
		while (j <= 57)
	{
		_putchar(j);
		j++;
		if (j > 57)
		{
			k = 48;
			while (k <= 52)
			{
				_putchar('1');
				_putchar(k);
				k++;
			}
		}
	}
		i++;
		_putchar('\n');
	}
}
