#include "main.h"

/**
 * puts_half - puts half
 *
 * @str: string
 *
 */

void puts_half(char *str)
{
	int n, length_of_the_string;

	length_of_the_string = strlen(str);
	n = (length_of_the_string - 1) / 2;
	str += n
	for (i = n; i < length_of_the_string; i++)
	{
		str++;
		_putchar(*str);
	}
	_putchar('\n');
}
