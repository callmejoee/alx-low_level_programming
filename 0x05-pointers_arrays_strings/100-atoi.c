#include "main.h"

/**
 * int _atoi(char *s)
 * 
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int sign, i, len, num;
	char digit;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (*s == '-')
		{
			if (isdigit(*(s + 1)))
				sign = - 1;
		}
		else if (*s == '+')
		{
			if (isdigit(*(s + 1)))
				sign =  1;
		}
		if (isdigit(*s))
		{
			 num *= 10;
			 num += s - '0';
			 num *= sign;
			 return num;
		}
		else
			return (0);
	}
}
