#include "main.h"
#include <stdio.h>

/**
 * main - print natural numbers below 1024 that are multiples of 3  or 5
 * Return: (0)
 */
int main(void)
{
	int a, b;

	b = 0

	for (a = 0; a < 1024; a++)
		{
		if ((a % 3) == 0 || (a % 5) == 0)
		b = b + a
		}
	printf("%dn", b);
	return (0);
}
