#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to copy
 * Return: Pointer to destination pointer with strings
 * copied from source string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
