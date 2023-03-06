#include "main.h"

/**
 * _strchr - function to search for char
 *
 * @s: string
 *
 * @c: char
 *
 * Return: @s
 *
 */

char *_strchr(char *s, char c)
{
	int index = 0;
	char *p = NULL;

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			p = &s[index];
			break;
		}
		index++;
	}
	if (*s == '\0')
		return ('\0');
	return (p);
}
