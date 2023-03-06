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
	int index;
	char *p = NULL;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			p = &s[index];
	}
	return (p);
}
