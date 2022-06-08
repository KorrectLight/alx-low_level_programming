#include "main.h"

/**
 * print_last_digit - main code
 * @n: input
 * Return: value of last digit
 */

int print_last_digit(int)
{
	if (n < 0)
	{
		n = n % 10;
		n = -n;
	}
	n = n % 10;
	_putchar(n + '0');

	return (n);
}
