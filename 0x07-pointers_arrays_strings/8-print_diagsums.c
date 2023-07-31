#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_diagsums - print the sums of diagonals
* @a: two dimensional array
* @size: size of array
*/
void print_diagsums(int *a, int size)
{
int i;
int j;
int k = 0;
int l = 0;
int sum1 = 0;
int sum2 = 0;

k = size - 1;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum1 += a[l];
if (j == k)
sum2 += a[l];
l++;
}
k--;
}
printf("%i, %i\n", sum1, sum2);
}
