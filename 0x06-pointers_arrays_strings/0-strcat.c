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
	int counter;
	char *start;

	start = dest;
	counter = 0;
	while (*start != '\0')
	{
		start++;
		counter++;
	}
	while (*src != '\0')
	{
		*start = *src;
		start++;
		src++;
		if (*(src + 1) == '\0')
			*(start + 1) = *(src + 1);
	}
	return (dest);
}
