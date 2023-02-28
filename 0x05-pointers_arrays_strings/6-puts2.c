#include "main.h"

/**
 * puts2 - functions to put every toher character
 *
 * @str: string
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;

		if (*(str - 1) == '\0')
		{
			_putchar('\n');
			return;
		}
	}
	_putchar('\n');
}
