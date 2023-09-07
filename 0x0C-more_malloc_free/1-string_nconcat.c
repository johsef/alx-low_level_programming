#include "main.h"
/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: first string
 * @s2 : second string
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: concatenated string on success,
 * NULL otherwise
 */ 

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	int i = 0;
	unsigned int j = 0;

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

	for (i = 0; s1[i]; i++)
		string[i] = s1[i];
	for (j = 0; s2[j] && j < n; j++,i++)
		string[i] = s2[j];
	string[i] = '\0';
	
	return (string);
}
