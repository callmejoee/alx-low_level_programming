#include "main.h"

/**
 * print_times_table - function to print the multplication table
 *
 * @n: the max number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, ans;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		if (n > 15 || n < 0)
			return;
		for (j = 1; j <= n; j++)
		{
			ans = i * j;
			if (ans > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			else if (ans > 99)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
				n = ans;

				while (n > 10)
				{
					n = n / 10;
				}
                                _putchar(n + '0');
                                _putchar((ans / 10) + '0');
                                _putchar((ans % 10) + '0');
                        }
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + '0');
			}
		}
		j++;

		_putchar('\n');
	}
}
