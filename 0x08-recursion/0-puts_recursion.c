#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _puts_recursion - puts out a string
* @s: String to be printed
* Return: 0 or new line
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
