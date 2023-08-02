#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: String to be measured for length
* Return: length of string
*/

int _strlen_recursion(char *s)
{
int lengthofstring = 0;
if (*s)
{
lengthofstring++;
lengthofstring += _strlen_recursion(s + 1);
}
return (lengthofstring);
}
