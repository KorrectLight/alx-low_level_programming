#include "main.h"

/**
 * _isalpha - main code
 * @c: the input
 * Return: 1 if c is a letter, uppercase or lower case otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
