#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer to array buffer
 * @size: number of rows andcolums of array
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum, result;

	sum = 0;
	result = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			if (i == j)
				sum = sum + *((a + i * size) + j);
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			if ((i + j) == (size - 1))
				result = result + *((a + i * size) + j);
	}
	printf("%d, %d\n", sum, result);
}
