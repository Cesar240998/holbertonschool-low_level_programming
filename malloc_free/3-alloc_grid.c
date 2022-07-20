#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates an array of chars,
 * and initializes it with a specific char
 * @width: first string to concat
 * @height: second one
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	char **array;
	unsigned int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	array = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
