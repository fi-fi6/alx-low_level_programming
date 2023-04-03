#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9
  * followed by a new line
  * Return: 0 alwways success
  */

void print_numbers(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		_putchar(numbers);

	_putchar('\n');
}
