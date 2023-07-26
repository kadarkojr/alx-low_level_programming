#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* reverse_array - function to compare two strings
* @a: array to be reversed
* @n: number of elements in array
**/
void reverse_array(int *a, int n)
{
int i;
int temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
