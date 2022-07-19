#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - creates an array of chars,
 * and initializes it with a specific char
 * @s1: first string to concat
 * @s2: second one
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	
	if (s1)
	{
		while (i < len1)
		{
			p[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	p[i] = '\0';

	return (p);
}
