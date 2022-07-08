#include "main.h"

/**
 * string_toupper - compares two strings
 * @s: first string
 */
char *string_toupper(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] >= 'a' && s[len] <= 'z')
			s[len] = s[len] - 32;
	}

	return(s);
}
