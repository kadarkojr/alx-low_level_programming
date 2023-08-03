#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strncat - function to concatenate two strings
* @src: source string
* @dest: destination string
* @n: integer in function
* Return: dest if succesful
**/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
