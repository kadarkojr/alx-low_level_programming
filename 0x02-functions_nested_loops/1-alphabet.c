#include <stdio.h>
#include "main.h"
/**
* print_alphabet - print alphabet in lowercase
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
