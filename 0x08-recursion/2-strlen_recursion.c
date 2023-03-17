#include "main.h"

/**
 * _strlen_recursion - rcurstion function
 *
 * @s: string
 *
 * Return: count
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0' || s == NULL)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
