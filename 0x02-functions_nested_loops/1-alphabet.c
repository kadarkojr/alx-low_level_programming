#include <stdio.h>
#include "main.h"
/**
* main - entry point
* print_alphabet - print alphabet in lowercase
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
