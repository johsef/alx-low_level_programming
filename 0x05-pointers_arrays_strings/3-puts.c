#include "main.h"
/**
   * _puts - A that  prints a string, followed
    * by a new line, to stdout.
     * @str: string
      * Return: Prints string
       */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
