#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: App to print lowercase alphabet letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char start, start_c;
	int end, end_c, i, j;

	start_c = 'A';
	start = 'a';
	end = 'z' - 'a';
	end_c = 'Z' - 'A';

	for (i = 0; i <= end; i++)
	{
		putchar(start);
		start++;
	}
	for (j = 0; j <= end_c; j++)
	{
		putchar(start_c);
		start_c++;
	}

	putchar('\n');

	return (0);
}
