#include <stdio.h>

/**
* main - A program that prints alphabet in lowercase except q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);

}
