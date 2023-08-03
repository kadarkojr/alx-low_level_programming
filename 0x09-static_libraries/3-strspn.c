#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strspn - get the length of a prefix sub string
* @s: string
* @accept: char
* Return: result
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j = 0;
unsigned int k = 0;

while (s[i] != ' ' && s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
k++;
j++;
}
i++;
j = 0;
}
return (k);
}
