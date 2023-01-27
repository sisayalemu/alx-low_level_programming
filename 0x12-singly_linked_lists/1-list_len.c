#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: variable for pointer
 * Return: length for the element exist
 **/

size_t list_len(const list_t *h)
{
	const list_t *new;
	unsigned int length = 0;

	new = h;
	while (new)
	{
		length++;
		new = new->next;
	}
	return (length);
}
