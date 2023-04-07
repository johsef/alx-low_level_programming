#include "calc.h"
/**
  * get_op_func - a function that receives an operand from the user and
  * return a pointer to a corresponding operator function
  * @s: character string passed to function
  *
  * Return: a pointer to the corresponding function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
