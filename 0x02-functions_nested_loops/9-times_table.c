#include "main.h"

/**
  * times_table - prints the 9 times table starting with 0
  *
  */

void times_table(void)
{
	int number, times, result;

	for (number = 0; number < 10; number++)
		_putchar('0');
	{
		for (times =  0; times < 10; times++)
		{
			_putchar(',');
			_putchar(' ');

		result = number * times;

			if (result < 10)
				_putchar(' ');

			else
				_putchar(result / 10 + '0');

		_putchar(result % 10 + '0');
		}

		_putchar('\n');
	}
}
