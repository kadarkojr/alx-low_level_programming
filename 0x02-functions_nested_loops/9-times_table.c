#include <stdio.h>
//#include "main.h"
/**
* times table - print the times table
* Return: times table
*/
void times_table(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if((i * j) > 9)
{
putchar(48 + (i * j) / 10);
putchar(48 + (i * j) % 10);
}
else
{
putchar(48 + (i * j));
}
if(j != 9)
{
putchar(',');
putchar(' ');
}
if((j * i) < 10)
{
putchar(' ');
}
}
putchar('\n');
}
}
