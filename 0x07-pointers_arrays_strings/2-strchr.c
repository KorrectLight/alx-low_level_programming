#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that locates a character
 * @s: input string
 * @c: input character to locate in string
 * Return: s when a character is found otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
