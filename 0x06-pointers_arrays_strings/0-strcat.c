#include "main.h"

/**
 * _strcar - function to concatenate two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer of type char
 */

char *_strcat(char *dest, char *src)
{
	int i, len;
	char *dest_copy;

	dest_copy = dest;
	len = 0;
	while (*dest_copy != '\0')
	{
		len++;
		dest_copy++;
	}

	for (i = 0; *src != '\0'; i++)
	{
		*(dest_copy) = *(src);
		dest_copy++;
		src++;
	}

	return (dest);
}
