#include "main.h" 

/**
 * memset - function to set the mem with charac
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
	char *start;

	start = s;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (start);
}
