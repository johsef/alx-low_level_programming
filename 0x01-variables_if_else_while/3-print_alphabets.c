#include <stdio.h>

/**
* main - A program that prints alphabet in lowercase and then uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{

	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	int y = 'A';

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);

}
