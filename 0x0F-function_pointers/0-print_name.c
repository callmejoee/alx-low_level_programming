#include "function_pointers.h"

/**
 * print_name - function to print name
 *
 * @name: name
 * @f: name of the function pointer
 *
 * Return: Void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
