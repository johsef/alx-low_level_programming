#include "main.h"
/**
  * jack_bauer - Function that prints every minute
  *of the day from 00:00 to 23:59
  *
  *
  */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i <= 2)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					if (i == 2 && j > 3)
						break;
					putchar(i + '0');
					putchar(j + '0');
					putchar(':');
					putchar(k + '0');
					putchar(l + '0');
					putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

