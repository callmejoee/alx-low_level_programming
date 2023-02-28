#include "main.h"

void puts2(char *str)
{
	if (*str = '\0')
		return;
	while(*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
