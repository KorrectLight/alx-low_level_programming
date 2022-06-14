#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: first input
 * @b: second input
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
