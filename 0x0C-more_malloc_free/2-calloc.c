#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _calloc - function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer
 * to the allocated memory
 * @nmemb: number of array elements
 * @size:number of bytes of allocated memory
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
