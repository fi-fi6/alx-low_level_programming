#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: number of times the character is printed
  * Return: nothing
  */

void print_diagonal(int n)
{
	int r, q;

	if (n <= 0)
		_putchar('\n');
	for (r = 0; r < n; r++)
	{
		for (q = 0; q < r; q++)
		{
			_putchar('_');
		}
		_putchar(92);
		_putchar('\n');
	}

}
