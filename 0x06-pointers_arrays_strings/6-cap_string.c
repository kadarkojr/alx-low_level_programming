#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* cap_string - function to capitalize a string
* @n: string
* Return: string n
**/
char *cap_string(char *n)
{
int i;

i = 0;
while (n[i])
{
while (!(n[i] >= 'a' && n[i] <= 'z'))
{
i++;
}
if (n[i - 1] == ' ' ||
n[i - 1] == '\t' ||
n[i - 1] == '\n' ||
n[i - 1] == ',' ||
n[i - 1] == ';' ||
n[i - 1] == '.' ||
n[i - 1] == '!' ||
n[i - 1] == '?' ||
n[i - 1] == '"' ||
n[i - 1] == '(' ||
n[i - 1] == ')' ||
n[i - 1] == '{' ||
n[i - 1] == '}' ||
i == 0)
{
n[i] = n[i] - 32;
}
i++;
}
return (n);
}
