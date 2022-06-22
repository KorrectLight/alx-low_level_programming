#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints a string
 * @s: the string to be be printed
 */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
