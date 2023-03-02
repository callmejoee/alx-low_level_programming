#include "main.h"

/**
 * _strncat - function to concatenate two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer of type char
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = strlen(dest);
	for (i = 0; i < n; i++)
	{
		*(dest + len + i) = *(src + i);
	}
	return (dest);
}
