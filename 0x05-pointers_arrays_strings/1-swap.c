#include "main.h"
/**
   * swap_int - A that swaps the values of two integers
    * @a:  first pointer of integer
     * @b:  second pointer of integer
      * Return: Swaps number
       */
void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;
	*b = num;
}
