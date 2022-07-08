#include "main.h"

/**
 * *_strncat - prints half of a string
 * followed by a new line
 * @dest: string to be printed
 * @src: number of elements
 * @n: numb of bytes
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len1;

	len = 0;
	len1 = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[len1] != '\0' && len1 < n)
	{
		dest[len] = src[len1];
		len++;
		len1++;
	}
	dest[len] = '\0';

	return (dest);
}
