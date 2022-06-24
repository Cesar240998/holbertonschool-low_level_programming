#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 * followed by a new line, except q and e
 * Return: Aways 0
 */
int main(void)
{	int num;
	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
