#include "main.h"
/**
   * print_rev - A  function that prints a string, in reverse,
    * followed by a new line.
     *@s: String
      *
       * Return - Prints string in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
