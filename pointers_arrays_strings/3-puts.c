#include "main.h"

/**
 * _puts - returns length of a string
 * @str: pointer to the variable to up
 * Return: the length of an string
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar ('\n');
}
