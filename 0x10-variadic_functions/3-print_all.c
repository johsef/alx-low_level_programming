#include "variadic_functions.h"
/**
 * print_all -  a function that prints anything.
 * @format: character string for type of argument
 * Return: output based on input from user in arguments
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *str, *sep = "";

	va_start(arg, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arg);
}
