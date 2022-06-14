#include "main.h"


/**
 * puts_half - print second half of a string
 * @str:  full string
 * Return - just void
 */


void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
