#include "main.h"
/**
   * print_number - A function that prints an integer.
    * @n:  integer number
     * Return: Prints number to terminal.
      */

 void print_number(int n)
	 {
		 if (n < 0)
		 {
			 putchar('-');
			 n = -n;   
		 }
		 if (n / 10)
			 print_number(n/10);       
		 putchar(n % 10 + '0');
	 }
