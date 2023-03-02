#include "main.h"

/**
 * _strncpy - copies string 
 *
 * @dest: destination 
 * @src: source
 * @n: number of bytes
 * Return: @dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + len + i) = *(src + i);
	}
	return (dest);
}
