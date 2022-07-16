#include "main.h"

/**
 * factorial - prints a string, followed by a new line
 * @n: string to print
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (0 <= n <= 1)
		return 1;
	else if (n < 0)
		return -1;
   	return n * factorial(n - 1);
}
