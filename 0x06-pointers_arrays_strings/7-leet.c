#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* leet - function to be encrypted
* @n: string
* Return: string n
**/
char *leet(char *n)
{
char a[] = "aeotlAEOTL";
char b[] = "4307143071";
int i = 0;
int j;

while (*(n + i) != '\0')
{
for (j = 0; j <= 9; j++)
{
if (*(n + i) == a[j])
{
*(n + i) = b[j];
}
}
i++;
}
return (n);
}
