#include "main.h"
/**
  *_abs - Function that computes the absolute value of an integer
  *@c: character
  * Return: absolute input character
  *
  */

int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);

}
