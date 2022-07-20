#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.*
 * @nmemb: number of elements
 * @size: size of an element
 *
 * Return: hola
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, fsize = nmemb * size;
	char *array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(fsize);

	if (!array)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < fsize; i++)
		array[i] = 0;

	return (array);
}
