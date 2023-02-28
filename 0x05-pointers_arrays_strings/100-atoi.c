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
	int i, len, num, sign;
	
	len = strlen(s);
	while (*s != '\0')
	{
		for (i = 0; i < len; i++)
		{
			if (isdigit(*s))
			{
				if (*(s - 1) == '-')
					sign = - 1;
				num = num * 10 + *s - '0';
				s++;
			}
		}
		s++;
	}
	num = num * sign;

	return (num);
}
