#include <stdio.h>

/**
  * main - prints the lowercase alphabet in reverse
  * followed by a new line
  * only use the putchar function twice
  * Return: 0 (Always)
  */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
