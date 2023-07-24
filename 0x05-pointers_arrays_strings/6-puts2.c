#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* puts2 - prints every other member of a string
* @str: String to be traversed
*/

void puts2(char *str)
{
int i;
int length = strlen(str);

for (i = 0; i < length; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
