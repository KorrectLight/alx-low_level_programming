#include "main.h"
#include <stdio.h>

/**
 * _isupper - main code
 * @c: input
 * Return: 1 otherwise 0
 */

int _isupper(int c)
{
	int c;


	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
