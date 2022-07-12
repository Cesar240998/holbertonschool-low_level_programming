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
		int i;

		while (1)
		{
			i = *s++;
			if (i == c)
			{
				return (s-1);
			}
			if (i == 0)
			{
				return (NULL);
			}
		}
}
