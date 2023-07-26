#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* string_toupper - function to capitalize a string
* @n: string
* Return: string n
**/
char *string_toupper(char *n)
{
int i;

i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
i++;
}
}
return (n);
}
