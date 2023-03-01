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
	// define where the null character in dest is then add src in that place
	int i;
	char *start, *nul_char;

	start = dest;
	while (*start != '\0')
	{
		start++;
	}
	nul_char = start + 1;
	for (i = 0; *src != '\0'; i++)
	{
		*nul_char = *src;
		nul_char++;
		src++;
	}

	return dest;
}
