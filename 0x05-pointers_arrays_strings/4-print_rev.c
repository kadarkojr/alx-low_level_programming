#include <stdio.h>
#include "main.h"

/**
* print_rev - print a string in reverse
* @str: String to be printed
*/

void print_rev(char *str)
{
int i;
int j;
int k;


i = 0;
while(str[i] != '\0')
{
i++;
}
k = i;
for (j = k - 1; j >= 0; j--)
{
putchar(str[j]);

}
putchar('\n');
}
