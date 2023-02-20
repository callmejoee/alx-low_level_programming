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
	int i;

	start = 'z';

	for (i = 0; i < 26; i++)
	{
		putchar(start);
		start--;
	}
	putchar('\n');

	return (0);
}
