#include "main.h"
#include <stdio.h>

/**
 * _strspn - fills memory with a constant byte
 * @s: memory area to be filled
 * @accept: char to copy
 * Return: pointer to the memory area s
 */
unsigned int _strspn(char *s, char *accept)
{
		int i, j, count = 0, flag;

		for (i = 0; s[0] != '\0'; i++)
		{
			flag = 0;
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
				count++;
				flag = 1;
				}
			}
			if (flag == 0)
				return (count);
		}
		return (count);
}		
