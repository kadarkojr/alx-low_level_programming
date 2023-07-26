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

strncpy(dest, src, n);
i = (int)strlen(src);
if (n >= 0 && n < i)
{
dest[n] = '\0';
}
return (dest);
}
