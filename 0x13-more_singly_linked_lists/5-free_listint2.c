#include "lists.h"
/**
 * free_listint2 - Starting point
 * @head: pointer to listint_t to be freed
 * Return:
 */
void free_listint2(listint_t **head)
{
listint_t *t;

if (head == NULL)
return;

while (*head)
{
t = (*head)->next;
free(*head);
*head = t;
}
*head = NULL;
}
