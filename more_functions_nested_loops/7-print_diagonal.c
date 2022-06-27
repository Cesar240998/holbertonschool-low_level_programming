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
	int count1, count2;

	if (n > 0)
	{
		for (count1 = 0; count1 < n; count1++)
		{
			for (count2 = 0; count2 < count1; count2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
