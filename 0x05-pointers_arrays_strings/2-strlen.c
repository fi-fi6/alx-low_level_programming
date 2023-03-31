#include "main.h"

/**
  * _strlen -  returns the length of a string
  * @s: the character to check
  * Return: 0 (Always positive)
  */

int _strlen(char *s)
{
	int length = 0;

	for (; *s++;)
	length++;

	return (length);
}
