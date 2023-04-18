#include <stdio.h>
/**
  *funcBeforeMain - function that executes before main
  *
  * Return: Nothing
  */
void __attribute__ ((constructor)) funcBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
