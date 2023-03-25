#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: 2D array with 8 rows and columns
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
			if (j == 8)
			{
				_putchar('\n');
			}
		}
		i++;
	}
}
