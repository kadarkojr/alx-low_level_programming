#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - add numbers
* @n: number of numbers
* @...: numbers
* Return: 0 or sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;
unisgned int sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
