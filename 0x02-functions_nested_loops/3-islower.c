#include "main.h"

/**
 * _islower - function to check if charachter is low
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else 
		return (0);
