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

for (i = 97; i < 123; i++)
{
    if (i == 101 || i == 113)
i = i;
else
{
putchar(i);
}
}
putchar('\n');
return (0);
}
