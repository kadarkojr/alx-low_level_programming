#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* rev_string - reverse a string
* @s: String to be reversed
*/

void rev_string(char *str)
{
int i;
int length = strlen(str);

for (i = 0; i < length / 2; i++)
{
char tmp = str[i];
str[i] = str[length - 1 -i];
str[length - 1 - i] = tmp;
}
}
