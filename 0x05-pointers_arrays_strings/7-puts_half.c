#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* puts_half - prints second half of the string
* @str: String to be traversed
*/

void puts_half(char *str)
{
int i;
int length = strlen(str);
if (length % 2 == 1)
{
for (i = (length / 2) + 1; i < length; i++)
{
putchar(str[i]);
}
}
else
{
for (i = length / 2; i < length; i++)
{
putchar(str[i]);
}
}
putchar('\n');
}
