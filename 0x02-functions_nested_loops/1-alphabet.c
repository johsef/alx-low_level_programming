#include "main.h"
/**
  * print_alphabet - Prints alphabets in lowercase foolowed by a new line
  *
  *Return: 0 Always SUccess
  *
  */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
