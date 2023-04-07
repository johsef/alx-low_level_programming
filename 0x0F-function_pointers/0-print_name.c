#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name of person
 * @f: pointer to name of person
 *
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
