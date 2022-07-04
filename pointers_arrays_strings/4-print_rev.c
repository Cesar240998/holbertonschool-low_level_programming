#include "main.h"

/**
 * print_rev - returns length of a string
 * @s: pointer to the variable to up
 * Return: void
 **/
void print_rev(char *s)
{
	int size = 0;
	int n;
	while (*s != '\0')
	{
		size++;
		s++;
	}
	s--;
	for (n = 0; n < size; n++)
	{
		_putchar(*s);
		s--;
	}
	_puthchar('\n');
}
