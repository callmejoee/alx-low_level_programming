#include "main.h"

/**
 * string_toupper - converts all input char to upper
 * @n: n strung
 * Return: pointer to hcar
 */

char *string_toupper(char *n)
{
	char *start;

	start = n;
	while (*(n) != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n -= 32;
		}
		n++;
	}
	return (start);
}
