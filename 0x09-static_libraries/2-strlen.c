#include "main.h"

/**
 * _strlen - prints str len
 * @s: string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
