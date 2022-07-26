#include "main.h"
/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 63)
		return (-1);

	bits = (n >> index) & 1;
	return (bits);
}
