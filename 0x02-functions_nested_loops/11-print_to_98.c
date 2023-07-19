#include <stdio.h>
#include "main.h"
/**
* print_to_98 - print from int n to 98
* @n: print from int n to 98
*
*/
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 99; i++)
{
printf("%d", i);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
else
{
for (i = n; i > 97; i--)
{
printf("%d", i);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
}
