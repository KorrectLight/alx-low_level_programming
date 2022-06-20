#include "main.h"
#include <stdio.h>

/**
 * _memcpy() - a function that copies byte from one memory area to another
 * @src: address of the memory area
 * @n: numbers of byte to fill with
 * @dest: address of the memory area to copying to
 * Return: mem
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
