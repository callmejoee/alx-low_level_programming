#include "main.h"

/**
 * times_table - function to print the multplication table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, ans;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = i * j;

			if (ans >= 9)
			{
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			else
			{
				_putchar(ans + '0');
				_putchar(' ');
			}
			_putchar(' ');
			_putchar(',');
		}
		_putchar('\n');
	}
}
