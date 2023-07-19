#include <stdio.h>
#include "main.h"
/**
* _isalpha - check if an alphabet is in lowercase
* @c: check character c
* Return: 1 if lowercase and 0 if uppercase
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
