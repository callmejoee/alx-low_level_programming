#include "main.h"

/**
 * leet - encode text to leet
 *
 * @s: string
 *
 * Return: @s
 */

char *leet(char *s)
{
	/**
	 * for loop  to the end of the string
	 * save the numbers in an array like this a4e3
	 * if array[i] == s[j] then change the letter
	 * and increment i with 2 and j with 1
	 * return s
	 */
	int i, j;
	char arr[] = "a4e3o0t7l1";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (arr[j] == s[i])
			{
				s[i] = arr[j + 1];
			}
		}
	}
	return (s);
}
