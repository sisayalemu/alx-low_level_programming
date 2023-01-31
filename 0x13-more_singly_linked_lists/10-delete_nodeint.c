#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - function delete node at index
 * @head: variable for pointing to first node
 * @index: variable for holding index
 * Return: new node after removal of node at specified index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	insigned int a;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index ==  0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (a = 0; a < index - 1; a++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
