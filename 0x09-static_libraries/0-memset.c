#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _memset - function to fill memory with a constant type)
* @s: first char
* @b: second char
* @n: integer
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
