#include "main.h"

/**
 * _strlen_recursion - rcurstion function
 *
 * @s: string
 *
 * Return: integer len
 */

int _strlen_recursion(char *s)
{
	static int count;

	if (*s == '\0')
		return (count);

	count++;
	_strlen_recursion(s + 1);

	return (count);
}
