#include "lists.h"
/**
 * pop_listint - Starting point
 * @head: pointer to the first element
 * Return: the head node's data or 0
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int n;

if (!head || !*head)
return (0);

n = (*head)->n;
t = (*head)->next;
free(*head);
*head = t;

return (n);
}
