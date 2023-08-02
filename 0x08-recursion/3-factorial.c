#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* factorial - returns the factorial of an int
* @n: int to be used
* Return: factorial of n
*/

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n * factorial(n - 1));
}
