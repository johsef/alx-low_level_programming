#include "main.h"
/**
 *array_range -  a function that creates an array of integers.
 *
 * @min: minimum value of array
 * @max : maximum value of array
 *
 * Return: pointer to created array,
 *		NULL otherwise. i.e malloc fails or min > max
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		ptr[i] = min;
	return (ptr);
}
