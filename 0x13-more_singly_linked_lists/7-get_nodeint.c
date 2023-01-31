#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that return a node at index
 * @head: variable for pointing to first node
 * @index: variable for having position
 * Return: gives us resulted node at specifed index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
