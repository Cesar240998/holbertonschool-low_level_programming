#include "main.h"

/**
 * puts2 - returns length of a string
 * @str: pointer to the variable to up
 * Return: the length of an string
 **/
void puts2(char *str)
{
	int size, n;
	size = 0;

	while (*str != '\0')
	{
		str++;
		size++;
	}

	for (n = 0; n < size; n += 3)
	{
		_putchar (str[n]);
	}
	_putchar('\n');
}
