#include <stdio.h>
#include "main.h"

/**
* flip_bits - count bits
* @n: number
* @m: number
* Return: bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
int count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
