#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _pow_recursion - returns the power of an int
* @x: int to be used
* @y: power to be raised to
* Return: factorial of n
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
