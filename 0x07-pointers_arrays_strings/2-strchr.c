#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strchr - return a pointer to the first occurence of c
* in the string, or null if empty.
* @s: string
* @c: char
* Return: pointer to remainder of string
*/
char *_strchr(char *s, char c)
{
if (c == '\0')
{
return (NULL);
}
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
