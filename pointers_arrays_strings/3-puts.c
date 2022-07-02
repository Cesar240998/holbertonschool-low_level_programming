#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to the variable to up
 * Return: the length of an string
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar ('\n');
}
