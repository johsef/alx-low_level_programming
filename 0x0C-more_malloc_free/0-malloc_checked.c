#include "main.h"
/**
 * malloc_checked - function that allocates memory
 *			using malloc
 * @b: size of bytes
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	if (b == 0)
		exit(98);

	alloc = malloc(b);

	if (alloc == NULL)
		exit(98);

	return (alloc);
}
