#include <stdio.h>

/**
 * main - a program that prints the size of types
 * Return:  Always 0 (Success), non zero otherwise
 */

int main(void)
{
	int Int;
	char Char;
	long int Lint;
	long long int Double;
	float Bigfloat;

	printf("Size of a char: %lu byte(s) \n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int %ld byte(s) \n", sizeof(long int));
	printf("Size of a long long int %ld byte(s) \n", sizeof(long long int));
	printf("Size of a float %ld byte(s)\n", sizeof(float));

	return (0);
}

