#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Starting point
 * @head: pointer
 * Return: number of nodes in list
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *to, *r;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

to = head->next;
r = (head->next)->next;

while (r)
{
if (to == r)
{
to = head;
while (to != r)
{
nodes++;
to = to->next;
r = r->next;
}

to = to->next;

while (to != r)
{
nodes++;
to = to->next;
}
return (nodes);
}
to = to->next;
r = (r->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Starting point
 * @head: pointer
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
