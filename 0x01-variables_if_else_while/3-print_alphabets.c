#include <stdlib.h>
#include <stdio.h>

/**
 * main - where all output are stored
 * Return: (void)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
		putchar('\n');

	return (0);

}
