#include <stdio.h>

/**
* main - A program that prints all numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);

}
