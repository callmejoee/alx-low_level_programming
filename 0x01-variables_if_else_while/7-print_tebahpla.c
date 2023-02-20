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
	char start;
	int letters, i;

	start = 'z';
	letters = 'z' - 'a';

	for (i = letters; i <= 0; i--)
	{
		putchar(start++);
	}
	putchar('\n');

	return (0);
}
