#include "lists.h"
/**
 * listint_len - function that return number of element
 * @h: variable for pointing to a list
 * Return: an integer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	unsigned int count = 0;

	node = h;
	while (node)
	{
		count++;
		node = node->next;
	}

	return (count);
}
