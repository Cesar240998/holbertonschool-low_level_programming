#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 * followed by a new line, except q and e
 * Return: Aways 0
 */
int main(void)
{	int num;
	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (num = 97; num <= 102; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
