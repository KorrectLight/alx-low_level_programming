#include <stdlib.h>
#include <stdio.h>

/**
 * main - storage
 * Retun: void
 */

int main(void)
{
	int d;
	int g;
	int v;
	int w;

	for (d = '0'; d <= '9'; d++)
	{
		for (g = '0'; g <= '9';g++)
		{
			for (v = '0'; v <= '9'; v++)
			{
				for (w = '0'; w <= '9'; w++)
				{
					if ((d + g) <= (v + w))
					{
						putchar(d);
						putchar(g);
						putchar(' ');
						putchar(v);
						putchar(w);
						if (d == '9' && g == '8')
							break;
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}	
