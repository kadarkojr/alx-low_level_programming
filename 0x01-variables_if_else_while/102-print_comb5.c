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

for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar('0' + (i / 10));
putchar('0' + (i % 10));
putchar(' ');
putchar('0' + (j / 10));
putchar('0' + (j % 10));
putchar(',');
  if (i = 98 && j = 99)
  {
    continue;
  }
  else
  {
    putchar(',');
    putchar(' ');
  }
}
}
putchar('\n');
return (0);
}
