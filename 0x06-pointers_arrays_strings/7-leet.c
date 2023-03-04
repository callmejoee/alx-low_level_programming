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
	/* for loop  to the end of the string
	 * save the numbers in an array like this a4e3
	 * if array[i] == s[j] then change the letter
	 * and increment i with 2 and j with 1
	 * return s
	 */
	int i;
	char array[9];

	array = "a4e3o0t7l1";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; array[j] != '\0'; j++)
		{
			if (array[j] == s[i])
			{
				s[i] = array[j+1];
			}
		}
	}
	return (s);
}
