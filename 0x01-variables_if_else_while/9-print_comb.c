#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print hexa'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
