#include <stdio.h>
#include "lists.h"

/**
* listint_len - returns list
* @h: list
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
