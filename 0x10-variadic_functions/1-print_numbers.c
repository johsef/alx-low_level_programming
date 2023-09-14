#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: character in between the numbers
 * @n: number of arguments
 *
 * Return: Numbers separated by character separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i == (n - 1))
			break;
		if (separator == NULL)
			printf("");
		else
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
