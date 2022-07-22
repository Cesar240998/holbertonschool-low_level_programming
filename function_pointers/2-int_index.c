#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: An array with numbers (int)
 * @size: number of elements of the array
 * @cmp: function for do the search
 *
 * Return: The index of the first element that match or -1 otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, res = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		
		if (res != 0)
			return (i);
	}
	return (-1);
}
