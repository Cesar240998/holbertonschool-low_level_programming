#include "main.h"
#include <stdio.h>

/**
 * *_strstr - fills memory with a constant byte
 * @haystack: memory area to be filled
 * @needle: char to copy
 * Return: pointer to the memory area s
 */
char *_strstr(char *haystack, char *needle)
{
		int i, j;

		for (i = 0; *haystack != '\0'; i++)
		{
			for (j = 0; *needle != '\0'; j++)
			{
				if (*haystack == *needle)
					return (haystack);
				needle++;
			}
		haystack++;
		}
		return (NULL);
}
