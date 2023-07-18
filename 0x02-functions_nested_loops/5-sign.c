#include <stdio.h>
#include "main.h"
/**
* print_sign - print the sign of a number
* @c: check character c
* Return: + if positive, 0 if zero or - if negative
*/
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c == 0)
{
_putchar(0 + '0');
return (0);
}
else if (c < 0)
{
_putchar('-');
}
return (-1);
}
