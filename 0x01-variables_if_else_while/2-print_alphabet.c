#include <stdio.h>

/**
  * main - a program that prints the alphabet in lowercase
  *
  * Return: 0 (Always)
  */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
