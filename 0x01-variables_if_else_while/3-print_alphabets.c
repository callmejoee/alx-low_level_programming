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
	char start,start_c;
	int end, end_c, i;

	start_c = 'A';
	start = 'a';
	end = 'z' - 'a';
	for (i = 0; i <= end; i++)
	{
		putchar(start);
		start++;
		putchar(start_c);
		start_c++;
	}

	putchar('\n');

	return (0);
}
