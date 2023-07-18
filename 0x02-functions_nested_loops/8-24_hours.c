#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print the minutes of the day
* Return: minutes of the day
*/
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
putchar(48 + (i / 10));
putchar(48 + (i % 10));
putchar(':');
putchar(48 + (j / 10));
putchar(48 + (j % 10));
putchar('\n');
}
}
}
