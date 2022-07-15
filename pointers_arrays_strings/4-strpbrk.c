#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - fills memory with a constant byte
 * @s: memory area to be filled
 * @accept: char to copy
 * Return: pointer to the memory area s
 */
char *_strpbrk(char *s, char *accept)
{
		int i, j;

		for (i = 0; *s != '\0'; i++)
		{
			for (j = 0; accept[j] != '\0'; j++)
				if (*s == accept[j])
					return (s);
		}
		return (NULL);
}
