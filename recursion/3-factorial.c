#include "main.h"

/**
 * factorial - prints a string, followed by a new line
 * @n: string to print
 *
 * Return: factorial
 */
int factorial(int n)
{
	if(n <= 1)
		return 1;
   	return n * factorial(n - 1);
}
