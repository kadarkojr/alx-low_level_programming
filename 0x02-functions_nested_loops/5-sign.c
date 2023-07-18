#include <stdio.h>
#include "main.h"
/**
* print_sign - check if an alphabet is in lowercase
* @c: check character c
* Print: + if positive, 0 if zero or - if negative
*/
int print_sign(int c)
{
if (c > 0)
{
    putchar('+');
    return (1);
}
else if (c == 0)
{
    putchar(0 + '0');
    return (0);
}
else if (c < 0)
{
    putchar('-');
}
return (-1);
}
