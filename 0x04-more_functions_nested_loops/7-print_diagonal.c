#include <stdio.h>
#include "main.h"

/**
* print_diagonal  - draws a diagonal in the terminal
* @n: number of character \ should be printed
*/

void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
{
putchar('\\');
putchar('\n');
}
else if (j < i)
{
putchar(' ');
}
}
}
}
}
