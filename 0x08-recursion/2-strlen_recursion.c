#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return the length of  a string
 * @s: the string to be be printed
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{

	int lngt = 0;

	if (*s)
	{
		lngt++;
		lngt += _strlen_recursion(s + 1);
	}

	return (lngt);

}
