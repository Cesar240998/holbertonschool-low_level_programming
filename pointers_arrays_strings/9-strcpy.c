#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - prints half of a string
 * followed by a new line
 * @dest: string to be printed
 * @src: number of elements
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, n;

	len = 0;
	
	while (src[len] != '\0')
	{	
		len++;
	}

	for (n = 0; n < len; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return(dest);
}
