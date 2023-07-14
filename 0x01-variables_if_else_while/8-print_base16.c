#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar('0' + i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
