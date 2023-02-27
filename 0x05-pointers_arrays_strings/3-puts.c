#include "main.h"

/**
 * _puts - function to output string
 *
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
