#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - a function that creates an array of integers
 * @min: least number of array
 * @max: maximum number of array
 * Return: array of numbers from min to max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, m;

	m = max + 1;
	ptr = malloc(sizeof(int) * m);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < m; ++i)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
