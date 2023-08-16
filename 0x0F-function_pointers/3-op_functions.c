#include <stdio.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - add numbers
* @a: int
* @b: int
* Return: sum
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - subtract numbers
* @a: int
* @b: int
* Return: difference
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Returns product
* @a: int
* @b: int
* Return: product
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Returns result of division
* @a: int
* @b: int
* Return: quotient
*/

int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - Returns remainder
* @a: int
* @b: int
* Return: remainder
*/

int op_mod(int a, int b)
{
return (a % b);
}
