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

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
		index++;
	}
	if (*s == '\0')
		return (NULL);
	return ('\0');
}
