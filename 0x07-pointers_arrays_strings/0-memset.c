#include "main.h"

/**
 * _memset - function to set the mem with charac
 *
 * @s: string pointer
 *
 * @b: character to be copied
 *
 * @n: number of times
 *
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
