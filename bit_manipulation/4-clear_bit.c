#include "main.h"
/**
 * clear_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (index > 63)
		return (-1);

	bits = 1 << index;

	*n = *n & (~bits);

	return (1);
}
