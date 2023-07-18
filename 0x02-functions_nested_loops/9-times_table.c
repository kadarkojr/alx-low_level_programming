#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print the minutes of the day
* Return: minutes of the day
*/
void times_table(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if((i * j) > 10)
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
}
putchar('\n');
}
}
