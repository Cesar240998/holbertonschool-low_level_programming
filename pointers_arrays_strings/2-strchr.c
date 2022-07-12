#include "main.h"
#include <stdio.h>

/**
 * *_strchr - fills memory with a constant byte
 * @s: memory area to be filled
 * @c: char to copy
 * Return: pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *tmp = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		tmp = &s[i+1];
	}

	return (temp);
}
