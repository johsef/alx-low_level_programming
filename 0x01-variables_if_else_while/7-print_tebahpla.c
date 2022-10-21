#include <stdio.h>

/**
* main - A program that prints the lowercase alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}
