#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: the array
  * @n: numbers of elements in the array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int m, j, temp;

	j = n - 1;

	for (m = 0; m < n / 2; m++)
	{
		temp = a[m];
		a[m] = a[j];
		a[j--] = temp;
	}
}
