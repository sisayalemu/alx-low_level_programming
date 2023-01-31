#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that add new node at beg
 * @head: variable foe adress of the first node
 * @n: variable for data of node
 * Return: newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
