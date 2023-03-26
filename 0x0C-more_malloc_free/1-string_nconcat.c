#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: byte to be read from s2
 * Return: pointer to newly allocated memory of concatenatd string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len, i, j;
	char *st;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		len = len1 + len2;
		n = len2;
	}
	else
		len = len1 + n;
	st = malloc(len);
	if (st == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		st[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		st[i] = s2[j];
		i++;
	}
	st[len] = '\0';
	return (st);
}
