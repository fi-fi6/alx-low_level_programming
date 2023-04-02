#include "main.h"

/**
  * print_alphabet_x10 - print 10x alphabet
  */

void print_alphabet_x10(void)
{
	int start_count = 0;
	char alpha;

	while (start_count++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);

		_putchar('\n');
	}
}
