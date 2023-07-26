#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strcat - function to concatenate two strings
* @src: source string
* @dest: destination string
* Return: dest if succesful
**/
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return (dest);
}
