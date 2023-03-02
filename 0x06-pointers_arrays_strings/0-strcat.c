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

	printf("pointer dest is %p\n", dest);
	printf("pointer src is %p\n", src);
	dest_copy = dest;
	printf("pointer dest copy is %p\n", dest_copy);
	while (*dest_copy != '\0')
	{
		len++;
		dest_copy++;
	}

	printf("pointer dest copy is %p\n", dest_copy);
	printf("length is %d\n", len);
	for (i = 0; *src != '\0'; i++)
	{
		*(dest_copy) = *(src);
		dest_copy++;
		src++;
	}

	printf("pointer  after assignment dest is %p\n", dest);
	printf("pointer assignment src is %p\n", src);
	return (dest);
}
