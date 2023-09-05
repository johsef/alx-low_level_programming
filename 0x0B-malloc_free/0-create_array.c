#include "main.h"
/**
 * create_array -  a function that creates an array of chars
 *		and initializes it with a specific char.
 * @size: size of memory to print
 * @c: character to print
 *
 * Return: A pointer to the array, NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
