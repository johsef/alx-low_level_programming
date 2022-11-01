#include "main.h"
/**
  *main - Program that prints numbers from 1 to 100 but
  *prints Fizz for multiples of 3 and Buzz for multiples of 5
  *Return: Always success
  */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	return (0);
}
