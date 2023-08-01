#include "lists.h"
/**
 * add_nodeint_end - Starting point
 * @head: pointer
 * @n: data to insert new element
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *no;
listint_t *t = *head;

no = malloc(sizeof(listint_t));
if (!no)
return (NULL);

no->n = n;
no->next = NULL;

if (*head == NULL)
{
*head = no;
return (no);
}
while (t->next)
t = t->next;
t->next = no;
return (no);
}
