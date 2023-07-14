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
int j;

for (i = 0; i < 10; i++)
{
	for (j = i; j < 10; j++)
	{
	if (i == j)
	{
	i = i;
	j = j;
	}
	else
	{
	putchar('0' + i);
	putchar('0' + j);
	if (i == 8 && j == 9)
	{
	i = i;
	j = j;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
}
	putchar('\n');
	return (0);
}
