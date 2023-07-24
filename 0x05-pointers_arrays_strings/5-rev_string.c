#include <stdio.h>
#include "main.h"

/**
* rev_string - reverse a string
* @s: String to be reversed
*/

void rev_string(char *s)
{
char revese[3000];
int i;
int j;
int k;


i = 0;
while (s[i] != '\0')
{
i++;
}
k = i;
for (j = k - 1; j >= 0; j--)
{
revese[k - 1 - j] = s[j];
}
s = reverse;
}
