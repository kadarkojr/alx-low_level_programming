#include <stdio.h>
#include "main.h"

/**
* main - prints numbers from 1 to 100
* prints Fizz instead of multiples of 3
* prints Buzz instead of multiples of 5
* prints FizzBuzz instead of multiples of both 3 and 5
* followed by a new line
* Return: Always 0
*/
int main(void)
{
int i;

for (i = 1; i < 101; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
