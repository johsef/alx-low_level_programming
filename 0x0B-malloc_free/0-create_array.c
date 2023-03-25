#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of characters of array
 * @c: specific character to be initialized with
 * Return: A pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);
	if (arr == NULL)
		return (NULL);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
		return (arr);
	}
	return (NULL);
}
