#include "main.h"

/**
 * leet - encodes a string 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int len, len1;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (len = 0; s[len] != '\0'; len++)
	{
		for (len1 = 0; len1 < 10; len1++)
		{
			if (s[len] == x[len1])
			{
				s[len] = y[len1];
			}
		}
	}

	return (s);
}
