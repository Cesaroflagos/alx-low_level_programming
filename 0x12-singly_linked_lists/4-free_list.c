#include "lists.h"

/**
 * free_list - Starting point
 * @head: list to be freed
 * Return:
 */
void free_list(list_t *head)
{
list_t *t;

while (head)
{
t = head->next;
free(head->str);
free(head);
head = t;
}
}
