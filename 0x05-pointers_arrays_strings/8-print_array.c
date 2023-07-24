#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* print_array - prints n number of items in an array
* @a: array to be traversed
* @n: number of items in array n to be printed.
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
putchar('\n');
}
