#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strncpy - function to concatenate two strings
* @src: source string
* @dest: destination string
* @n: integer in function
* Return: dest if succesful
**/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && i != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
