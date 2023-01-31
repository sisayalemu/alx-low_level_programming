#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that insert a new node at index
 * @head: variable for pointing to first node
 * @idx: variable for new node position
 * @n: variable for data
 * Return: inserted new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *pre_node;
	unsigned int a = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	pre_node = *head;
	for (; a < idx - 1 && pre_node != NULL; a++)
		pre_node = pre_node->next;
	if (pre_node == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = pre_node->next;
	pre_node->next = new_node;
	return (new_node);
}	
