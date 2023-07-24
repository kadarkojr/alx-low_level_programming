#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps the values of 2 integers
* @a: int to be swapped with b
* @b: int to be swapped with a
*/

void swap_int(int *a, int *b)
{
int *temp;

temp = a;
a = b;
b = temp;
}
