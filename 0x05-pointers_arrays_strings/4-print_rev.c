#include "main.h"

/**
 * print_rev - swaps to pointers to reverse
 *
 * @s: first string  variable
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, len;
	char *end;

	len = strlen(s);
	end = s + len - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(*end);
		end--;
	}
}
