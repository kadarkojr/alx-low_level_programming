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
int i;
int j;
char a[] = "aAeEiIoOuU";
char b[] = "4433007711";


while (n[i])
{
for (j = 0; j < 10; j++)
{
if (n[i] == a[j])
{
n[i] = b[j];
}
}
i++;
}
return (n);
}
