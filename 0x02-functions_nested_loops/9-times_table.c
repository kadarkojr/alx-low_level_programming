#include <stdio.h>
#include "main.h"
/**
* times_table - print the times table
*/
void times_table(void)
{
int i;
int j;
int k;
for (i = 0; i < 10; i++)
{
putchar('0');
for (j = 1; j <= 9; j++)
{
putchar(',');
putchar(' ');
k = i * j;
if (k <= 9)
{
putchar(' ');
}
else
putchar((k / 10) + '0');
putchar((k % 10) + '0');
}
putchar('\n');
}
}
