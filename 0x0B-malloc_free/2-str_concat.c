#include "main.h"
/**
 * str_concat -  a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: A pointer to new string,  NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j, k, ci,  len, len1, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	len1 = i;

	while (s2[j] != '\0')
		j++;
	len2 = j;
	len = len1 + len2;

	string = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);

	if (string == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		string[ci++] = s1[k];
		k++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		string[ci++] = s2[i];
		i++;
	}
	string[len] = '\0';
	return (string);
}
