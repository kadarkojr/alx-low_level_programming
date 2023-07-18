#include <stdio.h>
#include "main.h"
/**
* _islower - check if an alphabet is in lowercase
* @c: check character c
* Return: 1 if lowercase and 0 if uppercase
*/
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
int main()
{
int a;
a = _islower('A');
putchar(a + '0');
}
