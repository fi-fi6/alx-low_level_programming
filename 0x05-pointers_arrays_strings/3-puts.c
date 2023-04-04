#include "main.h"

/**
  * _puts - prints a string, followed by a new line, to stdout
  * @str: the pointer to the string
  * Return: nothing
  */

void _puts(char *str)
{
	int g = 0;

	while (str[g] != '\0')
	{
		_putchar(str[g]);
			g++;

	}

	_putchar('\n');

}
