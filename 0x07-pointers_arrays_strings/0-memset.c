#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: address of the memory area
 * @n: numbers of byte to fill with
 * @b: constant byte to fill with
 * Return: mem
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *mem = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (mem);
}
