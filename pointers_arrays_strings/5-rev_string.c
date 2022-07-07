#include "main.h"

/**
 * rev_strings - returns length of a string
 * @s: pointer to the variable to up
 * Return: void
 **/
void rev_string(char *s)
{
	int i, len, len1;
	char temp;

	len = 0;
	len1 = 0;

	while (*s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1
	
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
