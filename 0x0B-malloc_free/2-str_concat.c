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
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	string = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);

	if (string == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = s2[j];
	return (string);
}
