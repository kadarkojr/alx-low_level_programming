#include <stdio.h>
#include "main.h"

/**
* print_square - prints a square followed by a new line
* @size: size of the square to be printed
*/
void print_square(int size)
{
if (size <= 0)
{
putchar('\n');
}
else
{
int i;
int j;

for (i = 1; i < size + 1; i++)
{
for (j = 1; j < size + 1; j++)
{
putchar('#');
}
putchar('\n');
}
}
}
