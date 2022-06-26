#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: ampount of "\\"
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	_putchar('\n');
}
