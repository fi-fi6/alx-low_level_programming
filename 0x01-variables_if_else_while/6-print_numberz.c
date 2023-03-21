#include <stdio.h>

/**
  * main - prints all single digit numbers of base 10 starting from 0
  * followed by newline
  * no use of variable type char, just use putchar option
  * Return: 0 (Always)
  */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
