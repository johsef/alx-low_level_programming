#include "main.h"
/**
  * _isalpha - function that checks for alphabetic characters
  *@c: character
  *
  *Return: 1 if lowercase or uppoercase and 0 otherwise
  *
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
