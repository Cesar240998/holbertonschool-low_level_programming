#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, num1 = 0, num2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}

	for (i = 1; i < 2; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
			{
				printf("Error\n");
				return (-1);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
