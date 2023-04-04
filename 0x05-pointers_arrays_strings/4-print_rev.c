#include "main.h"

/**
 * print_rev - prints the reverse of a string followed by a new lin
 * @s: string pointer
 * Return: nil
 */

void print_rev(char *s)
{
	int i;

	int f = 0;

	while (s[f] != '\0')
	{
		i++;
	}
		for (i = f - 1; i >= 0; i--)
		{

			_putchar(s[i]);
		}

		_putchar('\n');
}
