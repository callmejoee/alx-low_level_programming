#include "main.h"

/**
 * _isdigit - function to check if charachter is digit
 * @c:  character to be checked
 * Return: 1 if upper 0 if not
 */

int _isdigit(int c)
{
	/* checks if the char is digit */
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
