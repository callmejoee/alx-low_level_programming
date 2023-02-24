#include "main.h"

/**
 * times_table - function to print the multplication table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, ans;

	for (i = 1; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			ans = i * j;
			if (ans > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + '0');
			}
		}
		j++;

		_putchar('\n');
	}
}
