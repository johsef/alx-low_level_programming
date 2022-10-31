#include "main.h"
/**
   * print_square - A function that prints a square, followed by a new line.
    * @size:  the size of the square
     * Return: Straight square in the terminal.
      */
void print_square(int size)
{
	int i, j;

	i = 0;
	if (size <= 0)
		putchar('\n');
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
		i++;
	}
}
