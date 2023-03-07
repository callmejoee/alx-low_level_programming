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
	 * while accept is not end of char
	 * if accept [i] ==  s increment counter
	 * increment i 
	 */

	i = 0;
	j = 0;
	while (accept[i] != '\0')
		{
			while (s[j] != '\0')
			{
				if (accept[i] == s[j])
					counter++;
				j++
			}
			i++;
		}
	return (counter);
}
