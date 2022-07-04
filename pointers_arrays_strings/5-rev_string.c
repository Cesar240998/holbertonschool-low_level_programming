#include "main.h"

/**
 * print_rev - returns length of a string
 * @s: pointer to the variable to up
 * Return: void
 **/
void rev_string(char *s)
{
	int size = 0;
	int n;

	while (*s != '\0')
	{
		_putchar(*s);
		size++;
		s++;
	}
	s--;
	for (n = 0; n < size; n++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
