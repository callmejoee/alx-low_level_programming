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
	 * for loop on the string entered
	 * for loop on the dictionary that i have
	 * make the number into lower form
	 * if the array equals the dict set the charachter to dic + 1
	 * increment dic by 2
	 */
	int i, j;
	char temp;
	char dic[] = "a4e3o0t7l1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; dic[j] != '\0'; j += 2)
		{
			temp = tolower(s[i]);

			if (dic[j] == temp)
			{
				s[i] = dic[j + 1];
			}
		}
	}
	return (s);
}
