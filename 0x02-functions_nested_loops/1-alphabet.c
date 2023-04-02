#include "main.h"

/**
  * print_alphabet - prints the alphabet in lowercase, then a new line
  * Return: 0 (Always success)
  */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; 'a' <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
