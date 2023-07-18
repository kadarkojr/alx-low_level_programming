#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print alphabet in lowercase 10 times
*/
void print_alphabet(void)
{
int i;
int j;
for(j = 0; j < 10; j++)
{
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
}
