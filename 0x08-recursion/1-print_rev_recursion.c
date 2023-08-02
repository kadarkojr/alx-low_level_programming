#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _print_rev_recursion - puts out a string in reverse
* @s: String to be printed in reverse
* Return: 0 or new line
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
