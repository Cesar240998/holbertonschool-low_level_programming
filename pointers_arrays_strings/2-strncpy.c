#include "main.h"

/**
 * *_strncpy - prints half of a string
 * followed by a new line
 * @dest: string to be printed
 * @src: number of elements
 * @n: numb of bytes
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}

	return (dest);
}
