#include <stdlib.h>
#include <stdio.h>

/**
 * main - storage
 * Return: (0) success
 */

int main(void)
{
	int d;
	int w;

	for (d = '0'; d <= '9'; d++)
	{
		for (w = '0'; w <= '9'; w++)
		{
			if (d != w && d < w)
			{
				putchar(d);
				putchar(w);

				if (d != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
