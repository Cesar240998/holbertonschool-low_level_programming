#include "main.h"

/**
 * print_array - prints half of a string
 * followed by a new line
 * @a: string to be printed
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	_putchar('\n');
}
