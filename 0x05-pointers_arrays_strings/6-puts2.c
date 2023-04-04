#include "main.h"

/**
 * puts2 - prints every other character of a string startin with the first one
 * @str: the string that check character
 * Return: 0 always success
 */

void puts2(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{

		_putchar(*(str + a));
		a += 2;

	}
	_putchar('\n');
}
