#include "main.h"

/**
 * str_concat - function
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: char poiniter
 *
 */

char *str_concat(char *s1, char *s2)
{
	int len_one, len_two, i = 0;
	char *new_string;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	len_one = strlen(s1);
	len_two = strlen(s2);
	new_string = (char *)malloc((len_one + len_two + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	while (*s2 != '\0')
	{
		new_string[i] = *s2;
		i++;
		s2++;
	}

	return (new_string);
}
