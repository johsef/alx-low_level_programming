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
	}
	for (int j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);

}
