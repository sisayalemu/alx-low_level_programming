#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that free a list
 * @head: variable for pointing to first node
 */

void free_listint(listint_t *head)
{
	listint_t *node1, *node2;

	node1 = head;

	while (node1 != NULL)
	{
		node2 = node1->next;
		free(node1);
		node1 = node2;
	}
}
