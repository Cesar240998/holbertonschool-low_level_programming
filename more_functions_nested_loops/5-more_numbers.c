#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n < 11; n++)
	{
		int c;
		for (c = 0; c < 15; c++)
		{
		_putchar(c + '0');
		}
	}
	_putchar('\n');
}
