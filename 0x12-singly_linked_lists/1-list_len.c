#include "lists.h"

/**
 * list_len - Starting point
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t elmt = 0;

while (h)
{
elmt++;
h = h->next;
}
return (elmt);
}
