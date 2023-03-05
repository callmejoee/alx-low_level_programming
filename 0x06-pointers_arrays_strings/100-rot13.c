#include "main.h"

/**
 * rot13 - encoder with rot 13
 *
 * @s: string
 *
 * Return: @s
 */

char *rot13(char *s)
{
	int i = 0;
	int def_val;
	char *alt;

	while (s[i] != '\0')
	{
		while (isalpha(s[i]))
		{
			def_val = 13;
			if ((s[i] > 'm' && s[i] <= 'z') || s[i] > 'M' && s[i] <= 'Z')
				def_val = -13;
			s[i] += def_val;
			break;
		}
		i++;
	}
	return (s);
}
