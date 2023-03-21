#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry of code
 * @argc: number of arguments passed to main function
 * @argv: array of arguments passed to main function
 * Return: 0 upon success and 1 upon Error
 */

int main(int argc, char *argv[])
{
	int i, res;

	res = 0;
	for (i = 1; i <= (argc - 1); i++)
	{
		if (argc == 1 || atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		res = res + atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
