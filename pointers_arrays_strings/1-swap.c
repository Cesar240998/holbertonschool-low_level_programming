#include "main.h"

/**
 * swap_int - updates the value of the variable
 * @a: pointer to the variable to update
 * @b: another one
 * */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
