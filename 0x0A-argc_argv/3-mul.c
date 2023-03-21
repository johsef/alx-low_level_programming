#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry to code
 * @argc: number of argument passed to main function
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;
	printf("%d\n", res);
	return (0);
}
