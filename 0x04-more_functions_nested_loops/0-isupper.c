#include "main.h"

/**
 * _isupper - function to check if charachter is upper alphabet
 * @c:  character to be checked
 * Return: 1 if upper 0 if not
 */

int _isupper(int c)
{
	/* checks if the letter is capital */
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
