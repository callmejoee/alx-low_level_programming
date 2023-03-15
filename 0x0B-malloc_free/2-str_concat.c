#include "main.h"

/**
 * str_concat - function
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: char poiniter
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, len, len_two;
	char *ptr;

	len = strlen(s1);
	len_two = strlen(s2);
	ptr = s1 + len;

	while (i <= len_two + 1)
	{
		ptr[i] = s2[i];
		i++;
	}

	return (s1);
}
