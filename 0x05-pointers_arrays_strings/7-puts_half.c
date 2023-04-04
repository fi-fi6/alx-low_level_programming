#include "main.h"

/**
  * puts_half - that prints half of a string, followed by a new line
  * @str: the string
  * Return: nothing
  */

void puts_half(char *str)
{
	int strlen = 0, h, i;

	while (*(str + strlen) != '\0')
	{
		strlen++;
	}
	strlen++;

	if (strlen % 2 != 0)
	{
		h = (strlen - 1) / 2;
	}
	else
	{
		h = strlen / 2;
	}

	for (i = h; i < strlen - 1; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
