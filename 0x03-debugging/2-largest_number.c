#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
 
int largest_number(int a, int b, int c)
{
int arr[3];
int temp;
int i;
int j;
arr[0] = a;
arr[1] = b;
arr[2] = c;
for (i = 0; i < 2; i++)
{
for (j = i + 1; j < 3; j++)
{
if (arr[i] > arr[j])
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
return (arr[2]);
}
