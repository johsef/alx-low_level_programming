#include "main.h"
/**
 * _calloc -  a function that allocates memory
 * for an array, using malloc
 *
 * @nmemb: array of elements
 * @size : number of bytes
 *
 * Return: pointer to allocated memory,
 *		NULL,if nmemb or size = 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}

