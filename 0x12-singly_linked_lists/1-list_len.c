#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - elements in list
* @h: pointer
* Return: elements
*/

size_t list_len(const list_t *h)
{
size_t a = 0;

while (h)
{
a++;
h = h->next;
}
return (a);
}
