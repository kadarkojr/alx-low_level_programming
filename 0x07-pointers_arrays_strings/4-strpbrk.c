#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strpbrk - search string for set of bytes
* @s: string
* @accept: string
* Return: result
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0;

while (*s)
{
while (accept[i] != '\0')
{
if (*s == accept[i])
return (s);
i++;
}
i = 0;
s++;
}
return ('\0');
}
