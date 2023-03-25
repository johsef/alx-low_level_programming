#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup -   a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string pointer
 * Return: A pointer to the duplicate string in memory,
 *  NULL if insufficient memory or str is NULL
 */
char *_strdup(char *str)
{
	char *st;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	st = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < i + 1; j++)
		st[j] = str[j];
	return (st);
}
