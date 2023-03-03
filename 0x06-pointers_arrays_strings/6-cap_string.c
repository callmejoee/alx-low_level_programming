#include "main.h"

/**
 * cap_string - converts all input char to upper
 * @n: n strung
 * Return: pointer to hcar
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (isalpha(n[i]))
		{
			if (isupper(n[i]))
				continue;

			else if (n[i] == 0)
				n[i] -= 32;

			else if (n[i - 1] == ',' || n[i - 1] == ';' || n[i - 1] == '.' ||
				 n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"' ||
				 n[i - 1] == '(' || n[i - 1] == ')' || n[i - 1] == '{' || n[i - 1] == '}')
				n[i] -= 32;
		}
		i++;
	}
	return (n);
}
