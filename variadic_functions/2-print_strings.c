#include "variadic_functions.h"
/**
 * print_strings - Print all the numbers passed like arguments
 * @separator: String to separate numbers
 * @n: Number of arguments
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str = NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(string);
	putchar(10);
}
