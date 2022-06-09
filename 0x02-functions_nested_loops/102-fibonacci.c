#include <stdio.h>

/**
 * main - first 50 fibonacci
 * Return: (0)
 */

int main(void)
{
	int i;
	long int fins;
	long int finp = 0;
	long int finn = 1;

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			fins = finn + finp;
			printf("%ld\n", fins);
		}
		else
		{
			fins = finn + finp;
			printf("%ld, ", fins);
			finp = finn;
			finn = fins;
		}
	}
	return (0);

}
