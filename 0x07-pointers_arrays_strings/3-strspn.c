#include "main.h"

/**
 * _strspn - function to print the number of letters found in the string
 *
 * @accept: letters to check for in string
 *
 * @s: string
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter, i, j;

	/**
	 * for string check all the accept
	 * if 
