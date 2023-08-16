#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - print name
* @name: string
* @f: pointer
* Return: no return
**/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
