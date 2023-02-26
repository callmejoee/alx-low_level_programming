#include "main.h"

/**
 * more_numbers - function to multiply
 * Return: void
 *
 */

void more_numbers(void)
{
	short unsigned int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
