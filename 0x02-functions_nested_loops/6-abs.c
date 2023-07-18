#include <stdio.h>
#include "main.h"
/**
* _abs - return the absolute value of a number
* @c: check character c
* Return: 1 if positive, 0 if zero or -1 if negative
*/
int _abs(int c)
{

if (c > 0)
{
putchar(48 + c);
}
else if (c == 0)
{
putchar(0 + '0');
}
else
{
putchar(48 + c * -1);
}
return (-1);
}
