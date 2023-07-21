#include <stdio.h>
#include "main.h"

/**
* print_triangle  - draws a triangle in the terminal
* @n: number of character \ should be printed
* followed by a new line
*/

void print_triangle(int n)
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
for (j = n - 1; j >= 0; j--)
{
if (i == j)
{
putchar('#');
}
else if (i > j)
{
putchar('#');
}
else if (j > i)
{
putchar(' ');
}
}
putchar('\n');
}
}
}
