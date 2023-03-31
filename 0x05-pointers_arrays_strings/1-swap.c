#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: first int value
  * @b: second int value
  * Return: 0 (Always Success)
  */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
