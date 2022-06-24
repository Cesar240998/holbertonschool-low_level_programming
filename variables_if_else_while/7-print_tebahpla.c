#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 * followed by a new line, except q and e
 * Return: Aways 0
 */
int main(void)
{	char num;
	for (num = 'z'; num >= 'a' ; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
