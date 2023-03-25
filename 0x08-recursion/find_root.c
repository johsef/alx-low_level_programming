#include "main.h"
/**
  * find_root - a function that finds root of a number
  * @b: number to find root
  * @test: test value
  * Return: root of number
  */
int find_root(int b, int test)
{
	if (test <= 0)
		return (-1);
	if (b != test)
	{
		if ((b * b) == test)
			return (b);
		find_root(b + 1, test);
	}
	else
		return (-1);
	return(0);
}
