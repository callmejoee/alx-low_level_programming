#include "main.h"

/**
 * cap_string - converts all input char to upper
 * @n: n strung
 * Return: pointer to hcar
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (*(n + i) != '\0')
	{
		if (i == 0 && !isupper(*n))
		{
			*n -= 32;
		}
		else if (*(n + 1) == ',' || *(n + 1) == ';' || *(n + 1) == '.' ||
			 *(n + 1) == '!' || *(n + 1) == '?' || *(n + 1) == '"' ||
			 *(n + 1) == '(' || *(n + 1) == ')' || *(n + 1) == '{' || *(n + 1) == '}')
			*(n + i) -= 32;

		i++;
	}
	return (n);
}
