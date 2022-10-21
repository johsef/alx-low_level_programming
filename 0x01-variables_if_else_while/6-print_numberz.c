#include <stdio.h>

/**
* main - A program that prints all single digit base 10 numbers from 0 using
* putchar()
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
