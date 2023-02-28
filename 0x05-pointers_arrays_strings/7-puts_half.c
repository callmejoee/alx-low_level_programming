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
	for (n = (length_of_the_string - 1) / 2; n < length_of_the_string; n++)
	{
		str += n
		_putchar(*str);
	}
	_putchar('\n');
}
