#include "main.h"

/**
 * *_memcpy - fills memory with a constant byte
 * @dest: memory area to be filled
 * @char: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
