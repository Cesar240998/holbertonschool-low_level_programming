#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	while(argv[])
	{
	printf("%s\n", *argv[i]);
	i++;
	}
	return (0);
}
