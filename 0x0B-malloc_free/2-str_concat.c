#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: pointer to newly allocated memory of concatenatd string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len, i, j;
	char *st;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	st = malloc(len + 1);
	if (st == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		st[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		st[i] = s2[j];
		i++;
	}
	st[len] = '\0';
	return (st);
}
