#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: function 
 *
 * Return: Always (0);
 */

void print_alphabet(void);

int main(void)
{
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(i+'a');
	}

	putchar('\n');

}
