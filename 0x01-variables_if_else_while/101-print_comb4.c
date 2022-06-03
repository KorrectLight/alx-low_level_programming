#include <stdlib.h>
#include <stdio.h>

/**
 * main - storage
 * Return: void
 */

int main(void)
{
	int d;
	int g;
	int w;

	for (d = '0'; d <= '9'; d++)
	{

		for (g = '0'; g <= '9'; g++)
		{
			for (w = '0'; w <= '9'; w++)
			{
				if (d < g && g < w)
				{
					putchar(d);
					putchar(g);
					putchar(w);

					if (d != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
