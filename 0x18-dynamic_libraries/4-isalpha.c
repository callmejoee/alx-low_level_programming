#include "main.h"

/**
 * _isalpha - function to check if charachter is alphabet
 * @c:  character to be checked
 * Return: 1 if lower 0 if not
 */

int _isalpha(int c)
{
	/* checks if the letter is small */
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
