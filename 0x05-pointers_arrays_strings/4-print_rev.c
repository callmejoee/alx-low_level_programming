#include "main.h"

/**
 * print_rev - print reverse
 * @s: variable
 *
 */

void print_rev(char *s);
{
	int i, len;
	char *beg, *end;
	char temp;

	len = strlen(s);
	beg = str;
	end = str + len - 1;

	for (i = 0; i < (len - 1) / 2; i++)
	{
		temp = *beg;
		*beg = *end;
		*end = *beg;
		beg++;
		end--;
	}
}	
