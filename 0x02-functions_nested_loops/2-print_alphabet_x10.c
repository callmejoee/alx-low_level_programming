#include "main.h"

void print_alphabet_x10(void)
{
	int i;
	char j;

	for(i = 0; i < 9; i++)
	{
		for(j = 'a'; i != 'z'; i++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
