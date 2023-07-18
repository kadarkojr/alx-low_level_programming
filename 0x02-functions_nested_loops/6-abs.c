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
return (c);
}
else if (c == 0)
{
return (0);
}
else
{
return (-c);
}
}
