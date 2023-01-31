#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that add node at the end
 * @head: variable for pointing to node
 * @n: variable for holding data of node
 * Return: newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1, *node2;

	node1 = malloc(sizeof(listint_t));

	if (node1 == NULL)
		return (NULL);

	node1->n = n;
	node1->next = NULL;

	if (*head == NULL)
	{
		*head = node1;
		return (node1);
	}

	node2 = *head;

	while (node2->next)
		node2 = node2->next;
	node2->next = node1;
	return (node1);
}

