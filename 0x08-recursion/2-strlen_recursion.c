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
	static int count = 0;
	if (*s == '\0')
		return count;
	else 
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (count);
}
