#include "main.h"

/**
 * cap_string - converts all input char to upper
 * @n: n strung
 * Return: pointer to hcar
 */
char *cap_string(char *n)
{
	char *start;

	start = n;
	while (*n != '\0')
	{
		if (!isdigit(*n) && !isalpha(*n))
		{
			*(n + 1) -= 32;
		}
	}
	return (start);
}
