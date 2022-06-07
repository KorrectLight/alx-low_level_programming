#include <stdlib.h>
#include <stdio.h>

/**
 * main - all codes are stored here
 * Return: (0)
 */

int main(void)
{
	int i;
	char b[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(b[i]);
	}
	putchar('\n');

	return (0);

}

