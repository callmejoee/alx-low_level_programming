#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print from 0 to 10'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
