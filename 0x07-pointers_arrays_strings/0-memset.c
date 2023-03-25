#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: string pointer array
 * @b: charaater to fill memmory buffer with
 * @n: number of byte to fill buffer with
 * Return: pointer to created memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
