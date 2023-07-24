#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* rev_string - reverse a string
* @s: String to be reversed
*/

void rev_string(char *s)
{
int i;
int length = strlen(s);

for (i = 0; i < length / 2; i++)
{
char tmp = s[i];
s[i] = str[length - 1 - i];
s[length - 1 - i] = tmp;
}
}
