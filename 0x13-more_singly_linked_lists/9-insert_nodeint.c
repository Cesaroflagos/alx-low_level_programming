#include "lists.h"
/**
 * insert_nodeint_at_index - Starting point
 * @head: first node
 * @idx: index
 * @n: data to insert new code
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *w;
listint_t *t = *head;

w = malloc(sizeof(listint_t));
if (!w || !head)
return (NULL);

w->n = n;
w->next = NULL;

if (idx == 0)
{
w->next = *head;
*head = w;
return (w);
}

for (i = 0; t && i < idx; i++)
{
if (i == idx - 1)
{
w->next = t->next;
t->next = w;
return (w);
}
else

t = t->next;
}
return (NULL);
}
