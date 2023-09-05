#include "main.h"
/**
 * _strdup -  a function that returns a pointer to a newly allocated
 *		space in memory, which contains a copy of the string given as a parameter
 *
 * @str: pointer of duplicate string
 *
 * Return: A pointer to duplicate string, NULL otherwise
 */

char *_strdup(char *str)
{
	char *ar;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		ar[i] = str[i];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
