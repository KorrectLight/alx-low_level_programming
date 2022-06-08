#include "main.h"

/**
 * _islower - Shows output if c is a lower case or otherwise
 * @c; this is the input
 * * Return: 1 for lower case. 0 for the rest
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
