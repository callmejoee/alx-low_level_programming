#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string
 */

void rev_string(char *s)
{
		int i, len;
		char *start, *end;
		char temp;

		len = strlen(s);
		start = s;
		end = (s + len) - 1;

		for (i = 0; i < (len - 1) / 2; i++)
		{
				temp = *end;
				*end = *start;
				*start = temp;
				start++;
				end--;
		}
}
