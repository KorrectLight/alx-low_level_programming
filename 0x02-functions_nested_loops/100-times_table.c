#include <stdio.h>

/**
 * print_times_table - main code
 * @n: input
 * Return: no return
 */

void print_times_table(int n)
{

	int i;
	int j;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if (i * j > 99 && j != 0)
					printf(", ");
				else if (i * j > 9 && j != 0)
					printf(",  ");
				else if (j != 0)
					printf(",   ");
				printf("%d", i * j);
			}
			printf("\n");
		}
	}
}
