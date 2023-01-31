#include "lists.h"
#include <stdlib.h>
/*
 * pop_listint - function remove first ele of node
 * @head: variable for pointing to a list
 * Return: an integer
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (*head == NULL)
		return (0);

	node = *head;
	*head = node->next;
	data = node->n;
	free(node);
	return (data);
}
