#include "main.h"
/**
  * print_last_digit - A function tat prints the last digit of a number
  *@n: number
  *
  * Return: value of last digit
  *
  */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		n *= -1;
		num = n % 10;
		_putchar(num + '0');
	}
	else
	{
		num = n % 10;
		_putchar(num + '0');
	}
	return (0);
}
