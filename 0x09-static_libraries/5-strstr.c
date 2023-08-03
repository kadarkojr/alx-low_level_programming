#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strstr - search haystack for string
* @haystack: string
* @needle: string
* Return: result
*/
char *_strstr(char *haystack, char *needle)
{
int count = 0;
int i = 0;
int j = 0;
int k = 0;
int l = 0;
int m = 0;
char *p;

while (needle[count] != '\0')
{
count++;
}
while (haystack[i] != '\0')
{
i++;
}
if (count == 0)
return (haystack);
while (haystack[j] != '\0')
{
if (haystack[j] == needle[0])
{
p = &haystack[j];
l = j;
m = 0;
for (k = 0; k < count; k++)
{
if (haystack[l] == needle[k])
m++;
l++;
}
}
if (m == count)
return (p);
j++;
}
return ('\0');
}
