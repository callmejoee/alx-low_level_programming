#include "main.h"

/**
 * _abs - print absolute value
 *
 *@n: the number to get the absolute for
 *
 * Return: Always the abs of the number
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	return (0);
}
