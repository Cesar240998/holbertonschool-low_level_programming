#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
