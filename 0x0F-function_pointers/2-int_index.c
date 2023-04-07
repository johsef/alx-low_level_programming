#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer from an array
 * and returns the array index of integer if found.
 * @array: array to check
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index to array if intger found, otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
