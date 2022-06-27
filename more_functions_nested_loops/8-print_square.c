#include "main.h"

/**
 * print_square - Prints a square.
 *
 * @size: ampount of "#"
 *
 * Return: Void
 */

void print_square(int size)
{
	int n, x;

	if (size > 0)
	{
		for (x = 0 ; x < size; x++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');			
		}
	} else
	_putchar('\n');
}
