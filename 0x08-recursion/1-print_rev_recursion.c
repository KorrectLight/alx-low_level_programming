#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string
 * @s: the string to be be printed
 */

void _puts_recursion(char *s) 
{

	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}

	else
		_putchar('\n');
}
