#include "lists.h"
/**
 * listint_len - Starting point
 * @h: links to traverse
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t no = 0;

while (h)
{
no++;
h = h->next;
}
return (no);
}
