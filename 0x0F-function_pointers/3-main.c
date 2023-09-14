#include "3-calc.h"
/**
  * main - Function that performs operations on operand
  * @argc: number of arguments or argument count
  * @argv: Array of arguments
  *
  * Return: Result of operation
  */
int main(int argc, char *argv[])
{
	int a, b;
	int (*cal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	cal = get_op_func(argv[2]);
	if (cal == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", cal(a, b));
	return (0);
}
