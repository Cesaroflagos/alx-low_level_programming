#include "lists.h"
/**
 * sum_listint - Starting point
 * @head: first node
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *t = head;

while (t)
{
s += t->n;
t = t->next;
}
return (s);
}
