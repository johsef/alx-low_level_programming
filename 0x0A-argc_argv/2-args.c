#include <stdio.h>
/**
 * main - Entry to code
 * @argc: number of argument passed to main function
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= (argc - 1); i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
