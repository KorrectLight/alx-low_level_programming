#include <stdio.h>
#include "main.h"

/**
 * _strcat - main code
 * @dest: first input
 * @src: second input
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int r;
	int o;

	for (r = 0; dest[r] != '\0'; r++)
		;

	for (o = 0; src[o] != '\0'; o++)
	{
		dest[r] = src[o];
		r++;
	}

	dest[r] = '\0';

	return (dest);
}
