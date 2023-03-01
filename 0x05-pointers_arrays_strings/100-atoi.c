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
	int isdigit;

	isdigit = 0;
	len = strlen(s);
	num = 0;
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
			isdigit = 1;
			digit = *s;
			num *= 10;
			num += digit - '0';
			num *= sign;
		}

	}
	if (isdigit == 0) {
		return (0);
	}

	return num;
}
