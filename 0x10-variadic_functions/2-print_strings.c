#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 *
 * @separator: seperate
 * @n: number of variables
 *
 * Return: void
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (ptr == NULL)
			printf("(nil)");
		printf("%s", va_arg(ptr, char *));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
