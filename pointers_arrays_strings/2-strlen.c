#include "main.h"

/**
 * _strlen - updates the value of the variable
 * @s: pointer to the variable to up
 **/
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
