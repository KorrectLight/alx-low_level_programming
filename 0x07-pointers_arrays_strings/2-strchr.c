#include "main.h"

/**
 * _memset - a function that locates a character
 * @s: input string
 * @c: input character to locate in string
 * Return: s when a character is found otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	else if (c != *s)
		return (NULL);
}
