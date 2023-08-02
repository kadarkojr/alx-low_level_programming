#include <stdio.h>
#include <string.h>
#include "main.h"
int prime_prime(int n, int i);

/**
* is_prime_number - check if integer is prime or not
* @n: int to check
* Return: 1 if true, 0 if false
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_prime(n, n - 1));
}

/**
* prime_prime - calculates if a number is prime recursively
* @n: number to evaluate
* @i: iterator
* Return: 1 if n is prime, 0 if not
*/
int prime_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (prime_prime(n, i - 1));
}
