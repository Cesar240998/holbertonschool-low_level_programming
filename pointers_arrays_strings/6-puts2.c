#include "main.h"

/**
 * _puts2 - returns length of a string
 * @str: pointer to the variable to up
 * Return: the length of an string
 **/
void _puts2(char *str)
{
	int size, n;
	size = 0;

	while (*str != '\0')
	{
		str++;
	}

	for (n = 0; n < size; i += 3)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
