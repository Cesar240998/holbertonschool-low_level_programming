#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - creates an array of chars,
 * and initializes it with a specific char
 * @str: size of the array to create
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	while ((p[i] = str[i]) != '\0')
		i++;

	return (p);
}
