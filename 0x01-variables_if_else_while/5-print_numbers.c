#include <stdio.h>

/**
* main - A program that prints all single digit base 10 numbers from 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);

}
