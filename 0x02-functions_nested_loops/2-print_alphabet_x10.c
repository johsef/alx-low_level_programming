#include "main.h"
/**
  * print_alphabet_x10 - Prints alphabets in lowercase ten times
  *
  *Return: 0 Always SUccess
  *
  */
void print_alphabet_x10(void)
{
	int ch, i;

	i = 0;

	while (i <= 9)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
