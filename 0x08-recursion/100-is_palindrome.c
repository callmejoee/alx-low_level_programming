#include "main.h"

/** check - check if palindrome
 *
 * @start: start of string
 *
 * @end: end of string
 *
 * Return: 1 if palindrome else return 0
 */

int check(char *start, char *end)
{
	if (*start != *end)
		return (0);
	if (*start == '\0')
		return (1);
	check(start + 1, end - 1);
}



/**
 * is_palindrome - check if palindrome
 *
 * @s: string
 *
 * Return: 1 if palindrome else 0 
 *
 */

int is_palindrome(char *s)
{
	return (check(s), s + strlen(s));
}
