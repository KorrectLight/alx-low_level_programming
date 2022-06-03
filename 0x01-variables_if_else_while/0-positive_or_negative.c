#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This contains all the main code
 * Return: void
 */
int main(void)
{
	int n;

	srand(time(0));
	n=rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	/* This checks if the number is positive */
	else if (n == 0)
		printf("%d is zero\n", n);
	/* This checks if the number is zero */
	else
		printf("%d is negative\n", n);

	return (0);

}
