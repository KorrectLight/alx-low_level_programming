#include <stdlib.h>
#include <stdio.h>

/**
 * main - storage
 * Return: void
 */

int main(void)
{
	int d, g;

	for (d = 0; d <= 98; d++)
	{
		for (g = d + 1; g <= 99; g++)
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			putchar(' ');
			putchar((g / 10) + '0');
			putchar((g % 10) + '0');

			if (d == 98 && g == 99)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');
	return (0);
}
