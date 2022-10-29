#include "main.c"
/**
  * print_to_98 - A function that prints natural numbers from n to 98
  *@n: integer number
  *
  *
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	if (n == 98)
		printf("%d", n);
	putchar('\n');
}
