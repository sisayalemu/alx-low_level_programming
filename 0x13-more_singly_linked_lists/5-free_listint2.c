#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a list
 * @head: variable for pointing for first node
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
}
