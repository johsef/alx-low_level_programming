#include <stdio.h>

/**
* main - A program that prints all numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
