#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *⅞⅞
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
	int ret = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	ret *= factorial(n - 1);

	return (ret);
}
