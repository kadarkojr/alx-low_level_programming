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
if (*s == '\0')
{
return (s);
}
else if (c == '\0')
{
return (s);
}
else
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
}
return ('\0');
}
