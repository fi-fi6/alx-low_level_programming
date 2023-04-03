#include "main.h"

/**
  * print_line - draws a straight line in the terminal
  * @n: number of times the character is printed
  * Return: nothing
  */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
