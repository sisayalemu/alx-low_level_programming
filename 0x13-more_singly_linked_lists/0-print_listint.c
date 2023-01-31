#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that print linked list
 * @h: variable for pointing to a list
 * Return: an interger
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	unsigned int count  = 0;

	node  = h;
	while (node)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
