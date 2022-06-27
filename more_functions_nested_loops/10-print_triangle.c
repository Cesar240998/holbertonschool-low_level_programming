#include "main.h"

/**
 * print_triangle - Prints a triangle.
 *
 * @size: ampount of "#"
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int n, x;

	if (size > 0)
	{
		for (x = 1 ; x <= size; x++)
		{
			for (n = x; n < size; n++)
			{
				_putchar(' ');
			}
			for (n = 1; n <= x; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	_putchar('\n');
}
