#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times in lowercase.
 *
 * Return: (0)
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
		{
		int i;
		for (i = 'a'; i <= 'z'; i++)
			{
				putchar(i);
			}
		putchar('\n');
		}
}
