#include "lists.h"
/**
 * free_listint - Starting point
 * @head: listint_t to be freed
 * Return:
 */
void free_listint(listint_t *head)
{
listint_t *t;

while (head)
{
t = head->next;
free(head);
head = t;
}
}
