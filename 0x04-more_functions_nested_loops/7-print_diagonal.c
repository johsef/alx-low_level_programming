#include "main.h"
/**
   * print_diagonal - A function that draws a diagonal line on the terminal.
    * @n:  the number of times the character \ should be printed
     * Return: Straight line in the terminal.
   */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i <= n)
	{
		if (n <= 0)
			break;
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
