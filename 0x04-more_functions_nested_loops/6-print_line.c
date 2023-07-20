#include <stdio.h>
#include "main.h"

/**
* print_line - draws a straight line in terminal
* @n: integer represents the number of times _ should be printed
* followed by a new line
*/
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i;

for (i = 0; i < n + 1; i++)
{
putchar('_');
}
putchar('\n');
}
}
