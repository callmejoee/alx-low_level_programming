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
	
	for (index = 0; s[index] >= 0; index++)
		if (s[index] == c)
			return (&s[index]);
	return ('\0');
}
