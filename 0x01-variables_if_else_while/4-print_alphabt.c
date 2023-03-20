#include <stdio.h>

/**
  * main - prints the alphabet in lowercase, followed by a new line
  *
  * Return: 0 (Always)
  */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
