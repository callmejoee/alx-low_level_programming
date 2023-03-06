#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello i gueess my name is youssef and i am happy to meet you ";
    char *f;

    f = _strchr(s, 'x');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
