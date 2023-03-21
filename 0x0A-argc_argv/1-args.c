#include <stdio.h>
/**
 * main - Entry to code
 * @argc: number of argument passed to main function
 * @argv: array of arguments passed to main function
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
