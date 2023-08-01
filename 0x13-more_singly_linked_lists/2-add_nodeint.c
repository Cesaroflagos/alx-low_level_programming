#include "lists.h"
/**
 * add_nodeint - Starting point
 * @head: pointer
 * @n: data to insert in that new code
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *w;

w = malloc(sizeof(listint_t));
if (!w)
return (NULL);

w->n = n;
w->next = *head;
*head = w;

return (w);
}
