#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _memcpy - function to fill memory with a constant type)
* @dest: first char
* @src: second char
* @n: integer
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
