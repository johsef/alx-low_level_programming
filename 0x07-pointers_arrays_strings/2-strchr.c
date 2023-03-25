#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to string
 * @c: characer to locate in string
 * Return: Pointer to string located in string pointer
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
