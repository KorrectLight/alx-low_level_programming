#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main code
 * @n: input
 * Return: no return
 */

void print_to_98(int n)
{
	if (n > 98)
	{
	for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
