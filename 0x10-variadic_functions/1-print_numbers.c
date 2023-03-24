#include "variadic_functions.h"

/**
 * print_numbers - function to print nums
 *
 * @separator: seperate
 * @n: number
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == NULL)
		return;
	va_start(ptr, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(ptr, int), separator);
	}
	printf("%d\n", va_arg(ptr, int));
	va_end(ptr);
}
