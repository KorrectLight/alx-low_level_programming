#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* This program is going to print the last digit */

/**
 * main - This contains all main code 
 * Return: void
 */
int main(void)
{
	int n;
	int a;


	srand(time(0));
	n = rand() - RAND_MAX / 2;


	a = n % 10;

	if (a > 5 )
	printf("Last digit of %d is %d and is greater than 5\n", n, a);

	else if (a < 6 && a !=0)
	printf("Last digit of %d is %d and is less than 6\n", n, a);

	else
	printf("Last digit of %d is %d and is 0\n", n, a);

	return(0);

}	
