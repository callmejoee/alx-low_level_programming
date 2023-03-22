#include "function_pointers.h"

/**
 * print_name - function to print name
 *
 * @name: name 
 *
 * Return: Void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
