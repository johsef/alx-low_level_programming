#include <stdio.h>

/**
* main - A program that prints all numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';
	int j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);

}
