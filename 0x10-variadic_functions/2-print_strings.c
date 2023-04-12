#include "variadic_functions.h"
/**
 * print_strings - function that prints stringd, followed by a new line
 * @separator: character in between the strings
 * @n: number of arguments
 * Return: Strings separated by character separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
