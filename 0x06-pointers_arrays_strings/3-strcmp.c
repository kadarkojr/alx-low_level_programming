#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strcmp - function to compare two strings
* @s1: first value
* @s2: second value
* Return: difference between first different values
**/
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
