#include <stdio.h>
#include "main.h"
/**
* print_last_digit - return the last digit of a number
* @c: check character c
* Return: last value
*/
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
putchar(48 + (i/10));
putchar(48 + (i%10));
putchar(':');
putchar(48 + (j/10));
putchar(48 + (j%10));
putchar('\n');
}
}
}
