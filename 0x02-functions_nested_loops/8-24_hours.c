#include "main.h"

/**
 * jack_bauer  - function to print every minute
 *
 * Return: void
 */
void jack_bauer(void)
{
	int minutes, hours;

	minutes = 00;
	hours = 00;
	while (hours != 23 || minutes != 59)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		_putchar('\n');

		if (minutes == 59)
		{
			minutes = 00;
			hours++;
			continue;
		}
		minutes++;
	}
}
