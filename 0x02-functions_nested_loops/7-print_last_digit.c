#include <stdio.h>
#include "main.h"
/**
* print_last_digit - return the last digit of a number
* @c: check character c
* Return: last value
*/
int print_last_digit(int c)
{
int a;
a = c % 10;
if (a < 0)
{
a = -a;
}
else
{
a = a;
}
_putchar(48 + a);
return (a);
}
