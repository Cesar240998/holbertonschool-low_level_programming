#include "main.h"

/**
 * *_strcat - prints half of a string
 * followed by a new line
 * @dest: string to be printed
 * @src: number of elements
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len, len1;

	len = 0;
	len1 = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[len1] != '\0')
	{
		dest[len] = src[len1];
		len++;
		len1++;
	}
	dest[n] = '\0';

	return (dest);
}
