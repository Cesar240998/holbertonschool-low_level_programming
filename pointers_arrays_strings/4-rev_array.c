#include "main.h"

/**
 * reverse_array - compares two strings
 * @a: first string
 * @n: second string
 */
void reverse_array(int *a, int n)
{
	int len, len1, temp;

	len1 = n - 1;
	for (len = 0; len < n / 2; len++)
	{
		temp = a[len];
		a[len] = a[len1];
		a[len1--] = temp;
	}
}
