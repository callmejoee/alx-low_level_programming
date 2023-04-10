#include "main.h"
#include <math.h>

/**
 * power - power function
 *
 * @a: base
 * @b: power
 *
 * Return: result
 */


int power(int a, int b)
{
	int result = 1;

	while (b != 0)
	{
		result *= a;
		b--;
	}
	return (result);
}

/**
 * binary_to_uint - function to convert binary number from string
 *
 * @b: binary string
 *
 * Return: unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 0, len, num;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
				num = 1;

			else if (b[i] == '0')
				num = 0;

			result += num * power(2, j);
			j++;
		}
		else
			return (0);
	}

	return (result);
}
