#include "main.h"

/**
 * _strncat - function to concatenate two strings of the num
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: num of bytes
 *
 * Return: @dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + len + i) = *(src + i);
	}
	return (dest);
}
