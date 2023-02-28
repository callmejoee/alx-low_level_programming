#include "main.h"

/**
 * _strcpy - str copy
 *
 * @dest: dest
 * @src: source
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *d;

	d = dest;
	for (i = 0; src != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = *(src + i);
	
	return (d);
}
