#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 * followed by a new line, except q and e
 * Return: Aways 0
 */
int main(void)
{
	int num = 0;

	while (num <= 10)
	{
			printf("%d",num);
			num++;
	}
	printf("\n");
	return (0);
}
