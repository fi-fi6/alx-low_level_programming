#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to the variable n each time it is executed
 * Return: 0 always (Success)
 */

int main(void)
{
	int n;

	int o;

	o = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (o > 5)
		printf("Last digit of %d and %d is greater that 5\n", o, n);

	if (o == 0)
		printf("Last digit of %d and %d is 0\n", o, n);

	if (o < 6 && n != 0)
		printf("Last digit of %d and %d  is less than 6 and not \n", o, n);

	return (0);

}
