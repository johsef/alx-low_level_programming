#include <stdio.h>

/**
* main - A program that prints all single digit base 10 numbers from 0 using
* putchar()
*
* Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}
