#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello to the new world and beyone 123\n";
    char s2[] = "World! adust after the break 23!:";
    char *ptr;

    printf("%s\n", s1);
    printf("first word:\n");
    printf("%s", s2);
    printf("second word:\n");
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("before the test case:\n");
    printf("%s", ptr);
    return (0);
}
