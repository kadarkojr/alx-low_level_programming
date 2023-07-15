#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;

for (i = 0; i < 100; i++)
{
for (j = i+1; j < 100; j++)
{
putchar('0' + (i / 10));
putchar('0' + (i % 10));
putchar(' ');
putchar('0' + (j / 10));
putchar('0' + (j % 10));
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
